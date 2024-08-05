///
/// HybridImageFactorySpec.kt
/// Mon Aug 05 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

package com.margelo.nitro.image

import android.util.Log
import androidx.annotation.Keep
import com.facebook.jni.HybridData
import com.facebook.proguard.annotations.DoNotStrip
import com.margelo.nitro.HybridObject

/**
 * A Kotlin class representing the ImageFactory HybridObject.
 * Implement this abstract class to create Kotlin-based instances of ImageFactory.
 */
@DoNotStrip
@Keep
abstract class HybridImageFactorySpec: HybridObject() {
  protected val TAG = "HybridImageFactorySpec"

  // Properties
  

  // Methods
  @DoNotStrip
  @Keep
  abstract fun loadImageFromFile(path: String): com.margelo.nitro.image.HybridImageSpec
  
  @DoNotStrip
  @Keep
  abstract fun loadImageFromURL(path: String): com.margelo.nitro.image.HybridImageSpec
  
  @DoNotStrip
  @Keep
  abstract fun loadImageFromSystemName(path: String): com.margelo.nitro.image.HybridImageSpec
  
  @DoNotStrip
  @Keep
  abstract fun bounceBack(image: com.margelo.nitro.image.HybridImageSpec): com.margelo.nitro.image.HybridImageSpec

  companion object {
    private const val TAG = "HybridImageFactorySpec"
    init {
      try {
        Log.i(TAG, "Loading NitroImage C++ library...")
        System.loadLibrary("NitroImage")
        Log.i(TAG, "Successfully loaded NitroImage C++ library!")
      } catch (e: Error) {
        Log.e(TAG, "Failed to load NitroImage C++ library! Is it properly installed and linked? " +
                    "Is the name correct? (see `CMakeLists.txt`, at `add_library(...)`)", e)
        throw e
      }
    }
  }
}
