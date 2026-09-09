#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgradeSet;
class ComponentItem;
class CompoundTag;
class HashedString;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ItemComponent : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ComponentItem*> mOwner;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemComponent();

    virtual bool checkComponentDataForContentErrors() const;

    virtual void writeSettings();

    virtual bool isNetworkComponent() const;

    virtual std::unique_ptr<CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const;

    virtual bool initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);

    virtual void handleVersionBasedInitialization(::SemVersion const&);

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initializeComponent(::ComponentItem*);

    MCNAPI bool initializeComponentFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&, ::ComponentItem*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindItemComponentType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $checkComponentDataForContentErrors() const;

    MCNAPI void $writeSettings();

    MCNAPI bool $isNetworkComponent() const;

    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCNAPI bool $initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);

    MCNAPI void $handleVersionBasedInitialization(::SemVersion const&);

    MCNAPI void $_initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
