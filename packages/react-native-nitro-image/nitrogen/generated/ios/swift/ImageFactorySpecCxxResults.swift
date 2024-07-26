///
/// ImageFactorySpecCxxResults.swift
/// Fri Jul 26 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

/**
 * C++ does not support catching Swift errors yet, so we have to wrap
 * them in a Result type.
 * - .value means the function returned successfully (either a value, or void)
 * - .error means the function threw any Error. Only the message can be propagated
 *
 * ImageFactorySpecCxx will then wrap all calls to ImageFactorySpec
 * to properly catch Swift errors and return either .value or .error to C++.
 */

import NitroModules

/**
 * The exception-free result type for ImageFactorySpec.loadImageFromFile(...).
 * Original func:
 * ```swift
 * func loadImageFromFile(path: String) throws -> ImageSpec
 * ```
 * - seealso: `ImageFactorySpec.loadImageFromFile(path:)`
 */
@frozen
public enum ImageFactorySpecCxx_loadImageFromFile_Result {
  case value(ImageSpecCxx)
  case error(message: String)
}

/**
 * The exception-free result type for ImageFactorySpec.loadImageFromURL(...).
 * Original func:
 * ```swift
 * func loadImageFromURL(path: String) throws -> ImageSpec
 * ```
 * - seealso: `ImageFactorySpec.loadImageFromURL(path:)`
 */
@frozen
public enum ImageFactorySpecCxx_loadImageFromURL_Result {
  case value(ImageSpecCxx)
  case error(message: String)
}

/**
 * The exception-free result type for ImageFactorySpec.loadImageFromSystemName(...).
 * Original func:
 * ```swift
 * func loadImageFromSystemName(path: String) throws -> ImageSpec
 * ```
 * - seealso: `ImageFactorySpec.loadImageFromSystemName(path:)`
 */
@frozen
public enum ImageFactorySpecCxx_loadImageFromSystemName_Result {
  case value(ImageSpecCxx)
  case error(message: String)
}

/**
 * The exception-free result type for ImageFactorySpec.bounceBack(...).
 * Original func:
 * ```swift
 * func bounceBack(image: ImageSpec) throws -> ImageSpec
 * ```
 * - seealso: `ImageFactorySpec.bounceBack(image:)`
 */
@frozen
public enum ImageFactorySpecCxx_bounceBack_Result {
  case value(ImageSpecCxx)
  case error(message: String)
}