///
/// HybridTestViewSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <NitroModules/JHybridObject.hpp>
#include <fbjni/fbjni.h>
#include "HybridTestViewSpec.hpp"




namespace margelo::nitro::image {

  using namespace facebook;

  class JHybridTestViewSpec: public jni::HybridClass<JHybridTestViewSpec, JHybridObject>,
                             public virtual HybridTestViewSpec {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/HybridTestViewSpec;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  protected:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridTestViewSpec(jni::alias_ref<jhybridobject> jThis) :
      HybridObject(HybridTestViewSpec::TAG),
      _javaPart(jni::make_global(jThis)) {}

  public:
    ~JHybridTestViewSpec() override {
      // Hermes GC can destroy JS objects on a non-JNI Thread.
      jni::ThreadScope::WithClassLoader([&] { _javaPart.reset(); });
    }

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    inline const jni::global_ref<JHybridTestViewSpec::javaobject>& getJavaPart() const noexcept {
      return _javaPart;
    }

  public:
    // Properties
    bool getIsBlue() override;
    void setIsBlue(bool isBlue) override;
    ColorScheme getColorScheme() override;
    void setColorScheme(ColorScheme colorScheme) override;
    std::function<void()> getSomeCallback() override;
    void setSomeCallback(const std::function<void()>& someCallback) override;

  public:
    // Methods
    void someMethod() override;

  private:
    friend HybridBase;
    using HybridBase::HybridBase;
    jni::global_ref<JHybridTestViewSpec::javaobject> _javaPart;
  };

} // namespace margelo::nitro::image
