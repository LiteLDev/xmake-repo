#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseGameTestInstance.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockSource;
class BoundingBox;
class Dimension;
class ScopedGameTestTickingArea;
class StructureBlockActor;
class Vec3;
struct DimensionType;
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class IGameTestHelperProvider; }
// clang-format on

class MinecraftGameTestInstance : public ::gametest::BaseGameTestInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>                               mDimension;
    ::ll::TypedStorage<1, 1, bool>                                       mChunkWasLoaded;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScopedGameTestTickingArea>> mScopedTickingArea;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameTestInstance& operator=(MinecraftGameTestInstance const&);
    MinecraftGameTestInstance(MinecraftGameTestInstance const&);
    MinecraftGameTestInstance();

public:
    // virtual functions
    // NOLINTBEGIN
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

    virtual ::BlockSource& getBlockSource() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

    MCNAPI bool $hasStructureBlock() const;

    MCNAPI void $clearStructure();

    MCNAPI void $spawnStructure();

    MCNAPI std::optional<AABB> $getStructureBounds() const;

    MCNAPI std::optional<Vec3> $getStructureBlockPivot() const;

    MCNAPI std::optional<Vec3> $getStructureBlockPosPivot() const;

    MCNAPI ::BoundingBox $getStructureBoundingBox() const;

    MCNAPI ::DimensionType $getStructureDimension() const;

    MCNAPI int $_getLevelTick() const;

    MCNAPI bool $_isTestReady();

    MCNAPI ::BlockSource& $getBlockSource() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
