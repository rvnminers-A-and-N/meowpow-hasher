{
    "targets": [
        {
            "target_name": "hashermeowpow",
            "sources": [
                "src/ethash/ethashprime.cpp",
                "src/ethash/primes.c",
                "src/ethash/progpowprime.cpp",
                "src/keccak/keccak.c",
                "src/keccak/keccakf800.c",
                "src/keccak/keccakf1600.c",
                "src/uint256.cpp",
                "src/utilstrencodings.cpp",
                "hashermeowpow.cc"
            ],
            "include_dirs": [
                ".",
                "src",
                "<!(node -e \"require('nan')\")"
            ],
            "cflags_cc": [
                "-std=c++0x"
            ]
        }
    ]
}
