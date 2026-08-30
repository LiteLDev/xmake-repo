#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "cstdarg"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
namespace RakNet { class SimpleMutex; }
// clang-format on

namespace RakNet {

class RakString {
public:
    // RakString inner types declare
    // clang-format off
    struct SharedString;
    // clang-format on

    // RakString inner types define
    struct SharedString {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::SimpleMutex*> refCountMutex;
        ::ll::TypedStorage<4, 4, uint>                   refCount;
        ::ll::TypedStorage<8, 8, ulong>                  bytesUsed;
        ::ll::TypedStorage<8, 8, char*>                  bigString;
        ::ll::TypedStorage<8, 8, char*>                  c_str;
        ::ll::TypedStorage<1, 100, char[100]>            smallString;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::RakString::SharedString*> sharedString;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Allocate(ulong);

    MCNAPI void Assign(char const*, ::__va_list);

    MCNAPI bool Deserialize(::RakNet::BitStream*);

    MCNAPI void Free();

    MCNAPI ulong GetLength() const;

    MCNAPI bool IsEmpty() const;

    MCNAPI explicit RakString(char const*);

    MCNAPI RakString(::RakNet::RakString const&);

    MCNAPI ::RakNet::RakString& operator=(char const*);

    MCNAPI ::RakNet::RakString& operator=(char*);

    MCNAPI bool operator==(::RakNet::RakString const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::RakNet::RakString::SharedString& emptyString();

    MCNAPI static ::DataStructures::List<RakNet::RakString::SharedString*>& freeList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(char const*);

    MCNAPI void* $ctor(::RakNet::RakString const&);
    // NOLINTEND
};

} // namespace RakNet
