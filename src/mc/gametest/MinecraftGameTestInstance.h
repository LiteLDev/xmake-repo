#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseGameTestInstance.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockSource;
class BoundingBox;
#if defined(LL_PLAT_A) // @header-generator platform
class Dimension;
class ScopedGameTestTickingArea;
class StructureBlockActor;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
struct DimensionType;
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class IGameTestHelperProvider; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class MinecraftGameTestInstance : public ::gametest::BaseGameTestInstance {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                               mDimension;
    ::ll::TypedStorage<1, 1, bool>                                       mChunkWasLoaded;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScopedGameTestTickingArea>> mScopedTickingArea;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkc127d6;
    ::ll::UntypedStorage<1, 1> mUnk4f4f29;
    ::ll::UntypedStorage<8, 8> mUnke021d7;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameTestInstance& operator=(MinecraftGameTestInstance const&);
    MinecraftGameTestInstance(MinecraftGameTestInstance const&);
    MinecraftGameTestInstance();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MinecraftGameTestInstance();

    virtual void initialize();

    virtual bool hasStructureBlock() const;

    virtual void clearStructure();

    virtual void spawnStructure();

    virtual std::optional<AABB> getStructureBounds() const;

    virtual std::optional<Vec3> getStructureBlockPivot() const;

    virtual std::optional<Vec3> getStructureBlockPosPivot() const;

    virtual ::BoundingBox getStructureBoundingBox() const;

    virtual ::DimensionType getStructureDimension() const;

    virtual int _getLevelTick() const;

    virtual bool _isTestReady();
#else // @header-generator platform
    virtual ~MinecraftGameTestInstance() /*override*/ = default;
#endif // @header-generator platform

    virtual ::BlockSource& getBlockSource() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void initialize() /*override*/;

    virtual bool hasStructureBlock() const /*override*/;

    virtual void clearStructure() /*override*/;

    virtual void spawnStructure() /*override*/;

    virtual ::std::optional<::AABB> getStructureBounds() const /*override*/;

    virtual ::std::optional<::Vec3> getStructureBlockPivot() const /*override*/;

    virtual ::std::optional<::Vec3> getStructureBlockPosPivot() const /*override*/;

    virtual ::BoundingBox getStructureBoundingBox() const /*override*/;

    virtual ::DimensionType getStructureDimension() const /*override*/;

    virtual int _getLevelTick() const /*override*/;

    virtual bool _isTestReady() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI ::BlockSource& $getBlockSource() const;

#endif // @header-generator platform
    MCNAPI void $initialize();

    MCNAPI bool $hasStructureBlock() const;

    MCNAPI void $clearStructure();

    MCNAPI void $spawnStructure();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<AABB> $getStructureBounds() const;
#else // @header-generator platform
    MCNAPI ::std::optional<::AABB> $getStructureBounds() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Vec3> $getStructureBlockPivot() const;
#else // @header-generator platform
    MCNAPI ::std::optional<::Vec3> $getStructureBlockPivot() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Vec3> $getStructureBlockPosPivot() const;
#else // @header-generator platform
    MCNAPI ::std::optional<::Vec3> $getStructureBlockPosPivot() const;
#endif // @header-generator platform

    MCNAPI ::BoundingBox $getStructureBoundingBox() const;

    MCNAPI ::DimensionType $getStructureDimension() const;

    MCNAPI int $_getLevelTick() const;

    MCNAPI bool $_isTestReady();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockSource& $getBlockSource() const;
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
