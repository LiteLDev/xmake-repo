#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/OrderedList.h"

// auto generated forward declare list
// clang-format off
struct StrAndBool;
namespace RakNet { class BitStream; }
// clang-format on

namespace RakNet {

class StringTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> orderedStringList;
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
    MCNAPI static ::RakNet::StringTable*& instance();

    MCNAPI static int& referenceCount();
    // NOLINTEND
};

} // namespace RakNet
