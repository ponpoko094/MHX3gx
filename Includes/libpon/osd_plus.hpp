//
// Created by ponpoko on 2021/03/21.
//

#ifndef MHX3GX_INCLUDES_PONLIB_OSD_PLUS_H_
#define MHX3GX_INCLUDES_PONLIB_OSD_PLUS_H_

#include <CTRPluginFramework.hpp>

#include "Helpers.hpp"

using namespace CTRPluginFramework;
namespace libpon {

class OSDPlus {
 public:
  // @return posY + 16
  static u32 Draw(const std::string &str, u32 posX, u32 posY, bool isTop,
                  const Color &foreground = Color::White,
                  const Color &background = Color::Black);

  // @return posY + 16
  static u32 DrawSystemFont(const std::string &str, u32 posX, u32 posY,
                            bool isTop, const Color &foreground = Color::White,
                            const Color &background = Color::Black);
};

}  // namespace libpon
#endif  // MHX3GX_INCLUDES_PONLIB_OSD_PLUS_H_