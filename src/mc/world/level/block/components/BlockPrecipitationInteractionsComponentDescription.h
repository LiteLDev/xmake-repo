#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"
#include "mc/world/level/block/components/PrecipitationBehavior.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
#if defined(LL_PLAT_A) // @header-generator platform
class SemVersion;
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockPrecipitationInteractionsComponentDescription
#if defined(LL_PLAT_A) // @header-generator platform
: public ::NetworkedBlockComponentDescription<BlockPrecipitationInteractionsComponentDescription> {
#else // @header-generator platform
: public ::NetworkedBlockComponentDescription<::BlockPrecipitationInteractionsComponentDescription> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PrecipitationBehavior> mBehavior;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BlockPrecipitationInteractionsComponentDescription&
    operator=(BlockPrecipitationInteractionsComponentDescription const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockPrecipitationInteractionsComponentDescription();
#else // @header-generator platform
    virtual ::std::string const& getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getName() const;
#else // @header-generator platform
    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockPrecipitationInteractionsComponentDescription(::PrecipitationBehavior);
#else // @header-generator platform
    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PrecipitationBehavior const& DEFAULT_BEHAVIOR();
#else // @header-generator platform
    MCAPI static ::std::string const& NameID();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& NameID();
#else // @header-generator platform
    MCAPI static ::std::string const& PrecipitationBehaviorID();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& PrecipitationBehaviorID();

    MCNAPI static std::string const& SchemaID();

    MCNAPI static ::SemVersion const& Version1_21_120();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PrecipitationBehavior);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::string const& SchemaID();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getName() const;
#else // @header-generator platform
    MCAPI ::std::string const& $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponent(::BlockComponentStorage&) const;
#else // @header-generator platform
    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage&) const;
#else // @header-generator platform
    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
