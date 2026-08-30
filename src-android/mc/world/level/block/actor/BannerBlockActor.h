#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BannerBlockType.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStack;
class ItemStackBase;
class SaveContext;
namespace mce { class Color; }
// clang-format on

class BannerBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                mDirtyBounds;
    ::ll::TypedStorage<1, 1, uchar>               mBaseColor;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mPatterns;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mColors;
    ::ll::TypedStorage<4, 4, ::BannerBlockType>   mBannerType;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BannerBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void onPlace(::BlockSource&);

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void tick(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BannerBlockActor(::BlockPos const&);

    MCNAPI ::BannerBlockType getBannerType() const;

    MCNAPI ::mce::Color getBaseColor() const;

    MCNAPI uchar getBaseColorInt() const;

    MCNAPI ::mce::Color getColor(int) const;

    MCNAPI uchar getPattern(int) const;

    MCNAPI int getPatternCount() const;

    MCNAPI void setItemValues(::ItemStackBase const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BannerBlockType getBannerType(::CompoundTag const*);

    MCNAPI static int getBaseColor(::ItemStack const&);

    MCNAPI static std::string getColors(::CompoundTag const*);

    MCNAPI static int getPatternCount(::CompoundTag const*);

    MCNAPI static std::string getPatterns(::CompoundTag const*);

    MCNAPI static bool isDefaultBanner(::ItemStackBase const&);

    MCNAPI static void removeLastPattern(::ItemStack&);

    MCNAPI static void
    setBannerDetails(::ItemStack&, int, std::string const&, std::string const&, ::BannerBlockType const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_PATTERNS();

    MCNAPI static std::string const& TAG_BASE_COLOR();

    MCNAPI static std::string const& TAG_COLOR();

    MCNAPI static std::string const& TAG_PATTERN();

    MCNAPI static std::string const& TAG_PATTERNS();

    MCNAPI static std::string const& TAG_TYPE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI void $onPlace(::BlockSource&);

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI void $tick(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
