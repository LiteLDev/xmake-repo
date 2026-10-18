#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CerealSchemaUpgradeSet;
#else // @header-generator platform
#endif // @header-generator platform
class ComponentItem;
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemComponent();
#else // @header-generator platform
    virtual ~ItemComponent() /*override*/ = default;
#endif // @header-generator platform

    virtual bool checkComponentDataForContentErrors() const;

    virtual void writeSettings();

    virtual bool isNetworkComponent() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    virtual bool initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleVersionBasedInitialization(::SemVersion const&);
#else // @header-generator platform
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void _initializeComponent(::ComponentItem& owner);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkComponentDataForContentErrors() const;
#else // @header-generator platform
    MCFOLD bool $checkComponentDataForContentErrors() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeSettings();
#else // @header-generator platform
    MCFOLD void $writeSettings();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isNetworkComponent() const;
#else // @header-generator platform
    MCFOLD bool $isNetworkComponent() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const&) const;
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCFOLD bool $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleVersionBasedInitialization(::SemVersion const&);
#else // @header-generator platform
    MCFOLD void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_initializeComponent(::ComponentItem&);
#else // @header-generator platform
    MCFOLD void $_initializeComponent(::ComponentItem& owner);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
