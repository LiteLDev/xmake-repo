#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/raknet/data_structures/OrderedList.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
struct StrAndBool;
#if defined(LL_PLAT_A) // @header-generator platform
namespace RakNet { class BitStream; }
#else // @header-generator platform
namespace DataStructures { class OrderedList; }
#endif // @header-generator platform
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
    MCNAPI static ::RakNet::StringTable*& instance();
#else // @header-generator platform
    MCAPI static ::RakNet::StringTable*& instance();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int& referenceCount();
#else // @header-generator platform
    MCAPI static int& referenceCount();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
