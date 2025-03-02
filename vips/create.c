// clang-format off
// include order matters
#include "lang.h"
#include "create.h"
// clang-format on

// https://libvips.github.io/libvips/API/current/libvips-create.html#vips-xyz
int xyz(VipsImage **out, int width, int height) {
  return vips_xyz(out, width, height, NULL);
}

// http://libvips.github.io/libvips/API/current/libvips-create.html#vips-black
int black(VipsImage **out, int width, int height) {
  return vips_black(out, width, height, NULL);
}

// https://libvips.github.io/libvips/API/current/libvips-create.html#vips-identity
int identity(VipsImage **out, int ushort) {
  if (ushort > 0) {
    return vips_identity(out, "ushort", TRUE, NULL);
  } else {
    return vips_identity(out, NULL);
  }
}

// https://libvips.github.io/libvips/API/current/libvips-create.html#vips-text
int text(VipsImage **out, TextOptions *o) {
  return vips_text(out, o->Text, "font", o->Font, "width", o->Width, "height", o->Height, "align", o->Align,
  "dpi", o->DPI, "rgba", o->RGBA, "justify", o->Justify, "spacing", o->Spacing, "wrap", o->Wrap, NULL);
}
