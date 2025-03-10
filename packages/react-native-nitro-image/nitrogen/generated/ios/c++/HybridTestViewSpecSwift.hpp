///
/// HybridTestViewSpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridTestViewSpec.hpp"

// Forward declaration of `HybridTestViewSpec_cxx` to properly resolve imports.
namespace NitroImage { class HybridTestViewSpec_cxx; }

// Forward declaration of `ColorScheme` to properly resolve imports.
namespace margelo::nitro::image { enum class ColorScheme; }

#include "ColorScheme.hpp"
#include <functional>

#include "NitroImage-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::image {

  /**
   * The C++ part of HybridTestViewSpec_cxx.swift.
   *
   * HybridTestViewSpecSwift (C++) accesses HybridTestViewSpec_cxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridTestViewSpec_cxx can directly inherit from the C++ class HybridTestViewSpec
   * to simplify the whole structure and memory management.
   */
  class HybridTestViewSpecSwift: public virtual HybridTestViewSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridTestViewSpecSwift(const NitroImage::HybridTestViewSpec_cxx& swiftPart):
      HybridObject(HybridTestViewSpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline NitroImage::HybridTestViewSpec_cxx& getSwiftPart() noexcept {
      return _swiftPart;
    }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    inline bool getIsBlue() noexcept override {
      return _swiftPart.isBlue();
    }
    inline void setIsBlue(bool isBlue) noexcept override {
      _swiftPart.setIsBlue(std::forward<decltype(isBlue)>(isBlue));
    }
    inline ColorScheme getColorScheme() noexcept override {
      auto __result = _swiftPart.getColorScheme();
      return static_cast<ColorScheme>(__result);
    }
    inline void setColorScheme(ColorScheme colorScheme) noexcept override {
      _swiftPart.setColorScheme(static_cast<int>(colorScheme));
    }
    inline std::function<void()> getSomeCallback() noexcept override {
      auto __result = _swiftPart.getSomeCallback();
      return __result;
    }
    inline void setSomeCallback(const std::function<void()>& someCallback) noexcept override {
      _swiftPart.setSomeCallback(someCallback);
    }

  public:
    // Methods
    inline void someMethod() override {
      auto __result = _swiftPart.someMethod();
      if (__result.hasError()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
    }

  private:
    NitroImage::HybridTestViewSpec_cxx _swiftPart;
  };

} // namespace margelo::nitro::image
