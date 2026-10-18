#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/Release.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

namespace Scripting {

struct TypeMapData : public ::Scripting::TaggedBinding {
public:
    // TypeMapData inner types declare
    // clang-format off
    struct Mapping;
    // clang-format on

    // TypeMapData inner types define
    struct Mapping {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                     name;
        ::ll::TypedStorage<8, 24, std::string>                     value;
        ::ll::TypedStorage<8, 24, std::vector<Scripting::Release>> classReleases;
        ::ll::TypedStorage<8, 24, std::vector<Scripting::Release>> keyReleases;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk3735b5;
        ::ll::UntypedStorage<8, 32> mUnk677d72;
        ::ll::UntypedStorage<8, 24> mUnkd9ce6c;
        ::ll::UntypedStorage<8, 24> mUnkd8b88b;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Mapping& operator=(Mapping const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Mapping(Mapping const&);
        Mapping();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI Mapping(::Scripting::TypeMapData::Mapping const&);

#else // @header-generator platform
#endif // @header-generator platform
        MCNAPI ~Mapping();
#if defined(LL_PLAT_A) // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Scripting::TypeMapData::Mapping const&);
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                  name;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::TypeMapData::Mapping>> mappings;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk6495ca;
    ::ll::UntypedStorage<8, 24> mUnk20f3b5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TypeMapData& operator=(TypeMapData const&);
    TypeMapData(TypeMapData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TypeMapData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TypeMapData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
