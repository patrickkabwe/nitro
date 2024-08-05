///
/// HybridImageFactorySpec.hpp
/// Mon Aug 05 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `HybridImageSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridImageSpec; }

#include "HybridImageSpec.hpp"

namespace margelo::nitro::image {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `ImageFactory`
   * Inherit this class to create instances of `HybridImageFactorySpec` in C++.
   * @example
   * ```cpp
   * class HybridImageFactory: public HybridImageFactorySpec {
   *   // ...
   * };
   * ```
   */
  class HybridImageFactorySpec: public HybridObject {
    public:
      // Constructor
      explicit HybridImageFactorySpec(): HybridObject(TAG) { }

      // Destructor
      ~HybridImageFactorySpec() { }

    public:
      // Properties
      

    public:
      // Methods
      virtual std::shared_ptr<margelo::nitro::image::HybridImageSpec> loadImageFromFile(const std::string& path) = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridImageSpec> loadImageFromURL(const std::string& path) = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridImageSpec> loadImageFromSystemName(const std::string& path) = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridImageSpec> bounceBack(std::shared_ptr<margelo::nitro::image::HybridImageSpec> image) = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "ImageFactory";
  };

} // namespace margelo::nitro::image
