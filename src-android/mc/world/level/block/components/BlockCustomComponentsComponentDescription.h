#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentDescription.h"
#include "mc/world/level/block/components/BlockCustomComponentData.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CerealSchemaUpgradeSet;
class CompoundTag;
class SemVersion;
namespace cereal { class DynamicValue; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockCustomComponentsComponentDescription : public ::BlockComponentDescription {
public:
    // BlockCustomComponentsComponentDescription inner types declare
    // clang-format off
    struct ComponentOverrides;
    // clang-format on

    // BlockCustomComponentsComponentDescription inner types define
    struct ComponentOverrides {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> overridePlayerInteract;
        ::ll::TypedStorage<1, 1, bool> overridePlayerPlacing;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<BlockCustomComponentData>> mCustomComponentData;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, BlockCustomComponentsComponentDescription::ComponentOverrides>> mComponentOverrides;
    ::ll::TypedStorage<1, 1, bool> mIsCustomComponentsV1;
    ::ll::TypedStorage<1, 1, bool> mHasPlayerInteractEvent;
    ::ll::TypedStorage<1, 1, bool> mHasPlayerPlacingEvent;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockCustomComponentsComponentDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual bool isNetworkComponent() const;

    virtual std::unique_ptr<CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const;

    virtual void initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addCustomComponent(std::string_view, ::cereal::DynamicValue, bool, bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SemVersion getV2ReleaseVersion();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getName() const;

    MCNAPI void $initializeComponent(::BlockComponentStorage&) const;

    MCNAPI bool $isNetworkComponent() const;

    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCNAPI void $initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
