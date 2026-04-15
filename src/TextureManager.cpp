#include <stdexcept>
#include <iostream>

#include <TextureManager.hpp>


TextureManager::TextureManager() {}


void TextureManager::load(const std::string& filepath, const std::string& key)
{
  // Exit the function if the given key has already been loaded
  if(this->textures.find(key) != this->textures.end()) return;
  
  sf::Texture texture;

  if(!texture.loadFromFile(filepath))
  {
    throw std::runtime_error("[ERROR]: Failed to load texture: " + filepath);
  }

  std::cout << "[LOG]: Texture has been loaded: " << filepath << std::endl;
  this->textures[key] = std::move(texture);
}


const sf::Texture& TextureManager::get(const std::string& key) const
{
  // it = iterator
  // std::unordered::find() returns an interator
  auto it = this->textures.find(key);

  if(it == this->textures.end())
  {
    throw std::runtime_error("[ERROR]: Texture not found: " + key);
  }

  // Accesses the value part of the key-value pair (sf::Texture)
  return it->second;
}


bool TextureManager::exists(const std::string& key) const
{
  /*
   *  std::unordered_map::count's return type is unsigned int
   *  It returns 1 if the given key was found, 0 otherwise
   */
  return this->textures.count(key) > 0;
}
