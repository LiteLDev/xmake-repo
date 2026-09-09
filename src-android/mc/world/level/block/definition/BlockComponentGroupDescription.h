#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
struct BlockComponentDescription;
namespace cereal { class DynamicValue; }
namespace cereal { class SerializerContext; }
// clang-format on

struct BlockComponentGroupDescription {
public:
    // BlockComponentGroupDescription inner types declare
    // clang-format off
    struct Components;
    // clang-format on

    // BlockComponentGroupDescription inner types define
    struct Components {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<BlockComponentDescription>>> mMap;
        // NOLINTEND

    public:
        // prevent constructor by default
        Components& operator=(Components const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void _setCustomComponent(std::string_view, std::shared_ptr<cereal::DynamicValue> const&, bool, bool);

        MCNAPI std::shared_ptr<cereal::DynamicValue> getCustomComponent(::cereal::SerializerContext const&) const;

        MCNAPI ~Components();
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
    ::ll::TypedStorage<8, 40, ::BlockComponentGroupDescription::Components>            mCerealDescriptions;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>>                               mTags;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<BlockComponentDescription>>> mDescriptions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockComponentGroupDescription(::BlockComponentGroupDescription const&);

    MCNAPI ::BlockComponentDescription* getComponentDescription(std::string const&) const;

    MCNAPI ::BlockComponentGroupDescription& operator=(::BlockComponentGroupDescription&&);

    MCNAPI ~BlockComponentGroupDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockComponentGroupDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
