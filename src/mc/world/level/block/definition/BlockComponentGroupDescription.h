#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class HashedString;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<BlockComponentDescription>>> mMap;
        // NOLINTEND
#else // @header-generator platform
        // Components inner types define
        using CerealDefaultValueOptOut = void;
#endif // @header-generator platform

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        Components& operator=(Components const&);
#else // @header-generator platform
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::shared_ptr<::BlockComponentDescription>>>
            mMap;
        // NOLINTEND
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void _setCustomComponent(std::string_view, std::shared_ptr<cereal::DynamicValue> const&, bool, bool);
#else // @header-generator platform
        MCAPI void _setCustomComponent(
            ::std::string_view                               compName,
            ::std::shared_ptr<::cereal::DynamicValue> const& compData,
            bool                                             overridePlayerInteract,
            bool                                             overridePlayerPlacing
        );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::shared_ptr<cereal::DynamicValue> getCustomComponent(::cereal::SerializerContext const&) const;
#else // @header-generator platform
        MCAPI ::std::shared_ptr<::cereal::DynamicValue>
        getCustomComponent(::cereal::SerializerContext const& context) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~Components();
#else // @header-generator platform
        MCAPI ~Components();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCFOLD void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::BlockComponentGroupDescription::Components>            mCerealDescriptions;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>>                               mTags;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<BlockComponentDescription>>> mDescriptions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::BlockComponentGroupDescription::Components>                  mCerealDescriptions;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>                                 mTags;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::BlockComponentDescription>>> mDescriptions;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BlockComponentGroupDescription(BlockComponentGroupDescription const&);
    BlockComponentGroupDescription();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockComponentGroupDescription(::BlockComponentGroupDescription const&);
#else // @header-generator platform
    MCAPI ::BlockComponentGroupDescription& operator=(::BlockComponentGroupDescription const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockComponentDescription* getComponentDescription(std::string const&) const;

    MCNAPI ::BlockComponentGroupDescription& operator=(::BlockComponentGroupDescription&&);

    MCNAPI ~BlockComponentGroupDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockComponentGroupDescription const&);
#else // @header-generator platform
    MCAPI ~BlockComponentGroupDescription();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
