#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/Map.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
namespace RakNet { class HuffmanEncodingTree; }
namespace RakNet { class RakString; }
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
    MCNAPI StringCompressor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void AddReference();

    MCNAPI static void RemoveReference();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::RakNet::StringCompressor*& instance();

    MCNAPI static int& referenceCount();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace RakNet
