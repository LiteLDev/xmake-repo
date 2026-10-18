#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/raknet/data_structures/Map.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace RakNet { class BitStream; }
#else // @header-generator platform
namespace DataStructures { class Map; }
#endif // @header-generator platform
namespace RakNet { class HuffmanEncodingTree; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace RakNet { class RakString; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace RakNet {

class StringCompressor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> huffmanEncodingTrees;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StringCompressor();
#else // @header-generator platform
    MCAPI StringCompressor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void AddReference();

    MCNAPI static void RemoveReference();
#else // @header-generator platform
    MCAPI static void RemoveReference();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::RakNet::StringCompressor*& instance();
#else // @header-generator platform
    MCAPI static ::RakNet::StringCompressor*& instance();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int& referenceCount();
#else // @header-generator platform
    MCAPI static int& referenceCount();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
