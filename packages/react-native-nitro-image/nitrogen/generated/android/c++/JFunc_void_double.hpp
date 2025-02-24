///
/// JFunc_void_double.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include <functional>

#include <functional>

namespace margelo::nitro::image {

  using namespace facebook;

  /**
   * Represents the Java/Kotlin callback `(num: Double) -> Unit`.
   * This can be passed around between C++ and Java/Kotlin.
   */
  struct JFunc_void_double: public jni::JavaClass<JFunc_void_double> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/Func_void_double;";

  public:
    /**
     * Invokes the function this `JFunc_void_double` instance holds through JNI.
     */
    void invoke(double num) const {
      static const auto method = getClass()->getMethod<void(double /* num */)>("invoke");
      method(self(), num);
    }
  };

  /**
   * An implementation of Func_void_double that is backed by a C++ implementation (using `std::function<...>`)
   */
  struct JFunc_void_double_cxx final: public jni::HybridClass<JFunc_void_double_cxx, JFunc_void_double> {
  public:
    static jni::local_ref<JFunc_void_double::javaobject> fromCpp(const std::function<void(double /* num */)>& func) {
      return JFunc_void_double_cxx::newObjectCxxArgs(func);
    }

  public:
    /**
     * Invokes the C++ `std::function<...>` this `JFunc_void_double_cxx` instance holds.
     */
    void invoke_cxx(double num) {
      _func(num);
    }

  public:
    [[nodiscard]]
    inline const std::function<void(double /* num */)>& getFunction() const {
      return _func;
    }

  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/Func_void_double_cxx;";
    static void registerNatives() {
      registerHybrid({makeNativeMethod("invoke_cxx", JFunc_void_double_cxx::invoke_cxx)});
    }

  private:
    explicit JFunc_void_double_cxx(const std::function<void(double /* num */)>& func): _func(func) { }

  private:
    friend HybridBase;
    std::function<void(double /* num */)> _func;
  };

} // namespace margelo::nitro::image
