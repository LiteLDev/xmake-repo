#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "cstdarg"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace RakNet { class SimpleMutex; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::RakNet::SimpleMutex*> refCountMutex;
        ::ll::TypedStorage<4, 4, uint>                   refCount;
        ::ll::TypedStorage<8, 8, ulong>                  bytesUsed;
        ::ll::TypedStorage<8, 8, char*>                  bigString;
        ::ll::TypedStorage<8, 8, char*>                  c_str;
        ::ll::TypedStorage<1, 100, char[100]>            smallString;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>   mUnka2f925;
        ::ll::UntypedStorage<4, 4>   mUnk59de61;
        ::ll::UntypedStorage<8, 8>   mUnk35e35d;
        ::ll::UntypedStorage<8, 8>   mUnka4bdce;
        ::ll::UntypedStorage<8, 8>   mUnke2527f;
        ::ll::UntypedStorage<1, 100> mUnk58a7f9;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        SharedString& operator=(SharedString const&);
        SharedString(SharedString const&);
        SharedString();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::RakNet::RakString::SharedString*> sharedString;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk886291;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RakString& operator=(RakString const&);
    RakString(RakString const&);
    RakString();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void Allocate(ulong);
#else // @header-generator platform
    MCAPI void Allocate(uint64 len);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void Assign(char const*, ::__va_list);
#else // @header-generator platform
    MCAPI void Assign(char const* str, char* ap);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool Deserialize(::RakNet::BitStream*);
#else // @header-generator platform
    MCAPI bool Deserialize(::RakNet::BitStream* bs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void Free();
#else // @header-generator platform
    MCAPI void Free();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong GetLength() const;

    MCNAPI bool IsEmpty() const;

    MCNAPI explicit RakString(char const*);

    MCNAPI RakString(::RakNet::RakString const&);

    MCNAPI ::RakNet::RakString& operator=(char const*);

    MCNAPI ::RakNet::RakString& operator=(char*);

    MCNAPI bool operator==(::RakNet::RakString const&) const;
#else // @header-generator platform
    MCAPI RakString(char const* format, ...);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::RakNet::RakString::SharedString& emptyString();
#else // @header-generator platform
    MCAPI static ::RakNet::RakString::SharedString& emptyString();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::DataStructures::List<RakNet::RakString::SharedString*>& freeList();
#else // @header-generator platform
    MCAPI static ::DataStructures::List<::RakNet::RakString::SharedString*>& freeList();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(char const*);

    MCNAPI void* $ctor(::RakNet::RakString const&);
#else // @header-generator platform
    MCAPI void* $ctor(char const* format, ...);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
