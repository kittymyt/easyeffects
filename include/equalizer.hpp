#ifndef EQUALIZER_HPP
#define EQUALIZER_HPP

#include <sigc++/sigc++.h>
#include <array>
#include "plugin_base.hpp"

class Equalizer : public PluginBase {
   public:
    Equalizer(std::string tag, std::string schema);
    ~Equalizer();

    GstElement* equalizer;

    void init_equalizer();

   private:
    void bind_band(const int index);
    void unbind_band(const int index);
};

#endif
