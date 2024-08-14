///
/// ImageSize.swift
/// Wed Aug 14 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

public typealias ImageSize = margelo.nitro.image.ImageSize

/**
 * Represents an instance of `ImageSize`, backed by a C++ object.
 */
public extension ImageSize {
  /**
   * Create a new instance of `ImageSize`.
   */
  init(width: Double, height: Double) {
    self.init(width, height)
  }

  var width: Double {
    @inline(__always)
    get {
      return self.__width
    }
    @inline(__always)
    set {
      self.__width = newValue
    }
  }
  
  var height: Double {
    @inline(__always)
    get {
      return self.__height
    }
    @inline(__always)
    set {
      self.__height = newValue
    }
  }
}