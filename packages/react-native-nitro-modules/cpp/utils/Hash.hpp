//
//  Hash.hpp
//  react-native-nitro
//
//  Created by Marc Rousavy on 14.07.24.
//

#pragma once

#include <cstddef>
#include <cstdint>

namespace margelo {

/**
 * Hashes the given C-String using the FNV-1a hashing algorithm.
 *
 * This function can be used at compile time as a constexpr to build
 * statically optimized switch statements.
 */
constexpr uint64_t hashString(const char* str, size_t length) {
  uint64_t hash = 14695981039346656037ull; // FNV offset basis
  const uint64_t fnv_prime = 1099511628211ull;

  for (size_t i = 0; i < length; ++i) {
      hash ^= static_cast<uint64_t>(str[i]);
      hash *= fnv_prime;
  }

  return hash;
}

}