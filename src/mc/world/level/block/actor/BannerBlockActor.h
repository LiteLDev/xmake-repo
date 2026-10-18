#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BannerBlockType.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStack;
class ItemStackBase;
class SaveContext;
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class Color; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BannerBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                mDirtyBounds;
    ::ll::TypedStorage<1, 1, uchar>               mBaseColor;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mPatterns;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mColors;
    ::ll::TypedStorage<4, 4, ::BannerBlockType>   mBannerType;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                  mDirtyBounds;
    ::ll::TypedStorage<1, 1, uchar>                 mBaseColor;
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>> mPatterns;
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>> mColors;
    ::ll::TypedStorage<4, 4, ::BannerBlockType>     mBannerType;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BannerBlockActor();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BannerBlockActor();
#else // @header-generator platform
    virtual void onPlace(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void tick(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlace(::BlockSource&);
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void tick(::BlockSource&);
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BannerBlockActor(::BlockPos const&);

    MCNAPI ::BannerBlockType getBannerType() const;

    MCNAPI ::mce::Color getBaseColor() const;

    MCNAPI uchar getBaseColorInt() const;

    MCNAPI ::mce::Color getColor(int) const;

    MCNAPI uchar getPattern(int) const;

    MCNAPI int getPatternCount() const;

    MCNAPI void setItemValues(::ItemStackBase const&);
#else // @header-generator platform
    MCAPI void setItemValues(::ItemStackBase const& instance);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BannerBlockType getBannerType(::CompoundTag const*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::BannerBlockType getBannerType(::CompoundTag const* tag);

    MCAPI static ::std::string getColors(::CompoundTag const* tag);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getBaseColor(::ItemStack const&);
#else // @header-generator platform
    MCAPI static int getPatternCount(::CompoundTag const* tagElement);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string getColors(::CompoundTag const*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string getPatterns(::CompoundTag const* tag);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getPatternCount(::CompoundTag const*);
#else // @header-generator platform
    MCAPI static bool isDefaultBanner(::ItemStackBase const& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string getPatterns(::CompoundTag const*);
#else // @header-generator platform
    MCAPI static void removeLastPattern(::ItemStack& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isDefaultBanner(::ItemStackBase const&);

    MCNAPI static void removeLastPattern(::ItemStack&);

    MCNAPI static void
    setBannerDetails(::ItemStack&, int, std::string const&, std::string const&, ::BannerBlockType const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void setBannerDetails(
        ::ItemStack&         instance,
        int                  customColor,
        ::std::string const& patterns,
        ::std::string const& colors,
        ::BannerBlockType    bannerType
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& MAX_PATTERNS();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_BASE_COLOR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_BASE_COLOR();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_COLOR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_COLOR();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_PATTERN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_PATTERN();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_PATTERNS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_PATTERNS();

    MCNAPI static std::string const& TAG_TYPE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_TYPE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void $onPlace(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCAPI void $tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlace(::BlockSource&);
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
#else // @header-generator platform
    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();
#endif // @header-generator platform
    // NOLINTEND
};
