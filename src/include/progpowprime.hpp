// ethashprime: C/C++ implementation of Ethashprime, the Ethereum Proof of Work algorithm.
// Copyright 2018-2019 Pawel Bylica.
// Licensed under the Apache License, Version 2.0.

/// @file
///
/// Progpowprime API
///
/// This file provides the public API for Progpowprime as the Ethashprime API extension.

#include <include/ethashprime.hpp>

namespace progpowprime
{
using namespace ethashprime;  // Include ethashprime namespace.

/// The Progpowprime algorithm revision implemented as specified in the spec
/// https://github.com/ifdefelse/Progpowprime.
constexpr auto revision = "0.9.5";

constexpr int period_length = 6;
constexpr uint32_t num_regs = 16;
constexpr size_t num_lanes = 8;
constexpr int num_cache_accesses = 6;
constexpr int num_math_operations = 9;
constexpr size_t l1_cache_size = 8 * 1024;
constexpr size_t l1_cache_num_items = l1_cache_size / sizeof(uint32_t);

void hash_one(const epoch_context& context, int block_number, const hash256 *header_hash,
    uint64_t nonce, hash256 *mix_out_ptr, hash256 *hash_out_ptr) noexcept;

bool verify(const epoch_context& context, int block_number, const hash256 *header_hash,
    const hash256 &mix_hash, uint64_t nonce, hash256 *hash_out) noexcept;

}  // namespace progpowprime
