///
/// PixelFormat.hpp
/// Thu Jul 18 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///


#pragma once

#include <NitroModules/Hash.hpp>
#include <NitroModules/JSIConverter.hpp>

enum class PixelFormat {
  rgb,
  yuv_8bit,
  yuv_10bit,
} __attribute__((enum_extensibility(closed)));

namespace margelo::nitro {

  // C++ PixelFormat <> JS PixelFormat (union)
  template <>
  struct JSIConverter<PixelFormat> {
    static inline PixelFormat fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      std::string unionValue = JSIConverter<std::string>::fromJSI(runtime, arg);
      switch (hashString(unionValue.c_str(), unionValue.size())) {
        case hashString("rgb"): return PixelFormat::rgb;
        case hashString("yuv-8bit"): return PixelFormat::yuv_8bit;
        case hashString("yuv-10bit"): return PixelFormat::yuv_10bit;
        default: [[unlikely]]
          throw std::runtime_error("Cannot convert " + unionValue + " to PixelFormat - invalid value!");
      }
    }
    static inline jsi::Value toJSI(jsi::Runtime& runtime, PixelFormat arg) {
      switch (arg) {
        case PixelFormat::rgb: return JSIConverter<std::string>::toJSI(runtime, "rgb");
        case PixelFormat::yuv_8bit: return JSIConverter<std::string>::toJSI(runtime, "yuv-8bit");
        case PixelFormat::yuv_10bit: return JSIConverter<std::string>::toJSI(runtime, "yuv-10bit");
        default: [[unlikely]]
          throw std::runtime_error("Cannot convert PixelFormat to JS - invalid value: "
                                    + std::to_string(static_cast<int>(arg)) + "!");
      }
    }
  };

} // namespace margelo::nitro