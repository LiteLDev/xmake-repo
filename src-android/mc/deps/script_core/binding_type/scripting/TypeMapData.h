#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/Release.h"
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
        ::ll::TypedStorage<8, 24, std::string>                     name;
        ::ll::TypedStorage<8, 24, std::string>                     value;
        ::ll::TypedStorage<8, 24, std::vector<Scripting::Release>> classReleases;
        ::ll::TypedStorage<8, 24, std::vector<Scripting::Release>> keyReleases;
        // NOLINTEND

    public:
        // prevent constructor by default
        Mapping& operator=(Mapping const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Mapping(::Scripting::TypeMapData::Mapping const&);

        MCNAPI ~Mapping();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Scripting::TypeMapData::Mapping const&);
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
    ::ll::TypedStorage<8, 24, std::string>                                  name;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::TypeMapData::Mapping>> mappings;
    // NOLINTEND

public:
    // prevent constructor by default
    TypeMapData& operator=(TypeMapData const&);
    TypeMapData(TypeMapData const&);

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
