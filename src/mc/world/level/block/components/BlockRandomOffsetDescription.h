#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
struct BlockRandomOffsetDescription : public ::NetworkedBlockComponentDescription<BlockRandomOffsetDescription> {
#else // @header-generator platform
struct BlockRandomOffsetDescription : public ::NetworkedBlockComponentDescription<::BlockRandomOffsetDescription> {
#endif // @header-generator platform
public:
    // BlockRandomOffsetDescription inner types declare
    // clang-format off
    struct RangeAndSteps;
    // clang-format on

    // BlockRandomOffsetDescription inner types define
    struct RangeAndSteps {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mRange;
        ::ll::TypedStorage<4, 4, uint>                      mSteps;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockRandomOffsetDescription::RangeAndSteps> mRangeX;
    ::ll::TypedStorage<4, 12, ::BlockRandomOffsetDescription::RangeAndSteps> mRangeY;
    ::ll::TypedStorage<4, 12, ::BlockRandomOffsetDescription::RangeAndSteps> mRangeZ;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockRandomOffsetDescription();
#else // @header-generator platform
    virtual ~BlockRandomOffsetDescription() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getName() const;
#else // @header-generator platform
    virtual ::std::string const& getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponent(::BlockComponentStorage&) const;
#else // @header-generator platform
    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;
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
    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::string const& NameID();
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
