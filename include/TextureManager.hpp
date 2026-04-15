#ifndef TEXTURE_MANAGER_HPP
#define TEXTURE_MANAGER_HPP

#include <string>
#include <unordered_map>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


class TextureManager
{
  private:
    std::unordered_map<std::string, sf::Texture> textures;

  public:
    TextureManager();

    void load(const std::string&, const std::string&);
    const sf::Texture& get(const std::string&) const;
    bool exists(const std::string&) const;
};


#endif
