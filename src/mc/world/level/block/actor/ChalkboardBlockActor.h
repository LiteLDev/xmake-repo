#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/textobject/TextObjectRoot.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/ChalkboardSize.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockActor;
#else // @header-generator platform
#endif // @header-generator platform
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
#if defined(LL_PLAT_A) // @header-generator platform
class IConstBlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class ILevel;
class ItemStack;
class Player;
class SaveContext;
// clang-format on

class ChalkboardBlockActor : public ::VanillaBlockActor {
public:
    // ChalkboardBlockActor inner types declare
    // clang-format off
    struct CachedLineData;
    struct CachedMessageData;
    struct ChalkboardFinder;
    // clang-format on

    // ChalkboardBlockActor inner types define
    struct CachedLineData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> text;
        ::ll::TypedStorage<4, 4, int>          lineLength;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> text;
        ::ll::TypedStorage<4, 4, int>            lineLength;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        CachedLineData& operator=(CachedLineData const&);
        CachedLineData(CachedLineData const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct CachedMessageData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 512, std::array<ChalkboardBlockActor::CachedLineData, 16>> lineData;
        ::ll::TypedStorage<4, 4, uint>                                                   numLines;
        ::ll::TypedStorage<8, 24, std::string>                                           filteredMessage;
        ::ll::TypedStorage<8, 8, void const*>                                            cachedFontCompare;
        ::ll::TypedStorage<1, 1, bool>                                                   dirty;
#else // @header-generator platform
        ::ll::TypedStorage<8, 640, ::std::array<::ChalkboardBlockActor::CachedLineData, 16>> lineData;
        ::ll::TypedStorage<4, 4, uint>                                                       numLines;
        ::ll::TypedStorage<8, 32, ::std::string>                                             filteredMessage;
        ::ll::TypedStorage<8, 8, void const*>                                                cachedFontCompare;
        ::ll::TypedStorage<1, 1, bool>                                                       dirty;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        CachedMessageData& operator=(CachedMessageData const&);
        CachedMessageData(CachedMessageData const&);
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~CachedMessageData();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI ~CachedMessageData();
#endif
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
    };

    struct ChalkboardFinder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                    mChunkFound;
        ::ll::TypedStorage<8, 8, ::ChalkboardBlockActor*> mBoard;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool confirmedBroken(::ChalkboardBlockActor&, ::BlockSource&) const;
#else // @header-generator platform
        MCAPI bool confirmedBroken(::ChalkboardBlockActor& compare, ::BlockSource& region) const;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                mText;
    ::ll::TypedStorage<8, 24, std::string>                                mTextObjectString;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                              mText;
    ::ll::TypedStorage<8, 32, ::std::string>                              mTextObjectString;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 32, ::TextObjectRoot>                           mTextObjectMessage;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 560, ::ChalkboardBlockActor::CachedMessageData> mCachedMessage;
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>>                      mSiblings;
#else // @header-generator platform
    ::ll::TypedStorage<8, 696, ::ChalkboardBlockActor::CachedMessageData> mCachedMessage;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                  mSiblings;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                        mShouldPersistFormatting;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                 mBasePos;
    ::ll::TypedStorage<1, 1, ::ChalkboardSize>                            mSize;
    ::ll::TypedStorage<1, 1, bool>                                        mIsOnGround;
    ::ll::TypedStorage<1, 1, bool>                                        mIsLocked;
    ::ll::TypedStorage<1, 1, bool>                                        mInitialized;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mOwner;
    // NOLINTEND

public:
    // prevent constructor by default
    ChalkboardBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ChalkboardBlockActor();
#else // @header-generator platform
    virtual ~ChalkboardBlockActor() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual void onChanged(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    virtual void tick(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&);
#else // @header-generator platform
    virtual ::std::string getImmersiveReaderText(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getImmersiveReaderText(::BlockSource&);
#else // @header-generator platform
    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> getUgcStrings(::CompoundTag const&) const;
#else // @header-generator platform
    virtual void setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChanged(::BlockSource&);
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ChalkboardBlockActor const* getBaseChalkboard(::IConstBlockSource const&) const;
#else // @header-generator platform
    MCAPI explicit ChalkboardBlockActor(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ChalkboardBlockActor* getBaseChalkboard(::BlockSource&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI int getRotation(::BlockSource& region) const;

    MCAPI ::std::string const& getText() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ChalkboardBlockActor::CachedMessageData const& getCachedMessage() const;
#else // @header-generator platform
    MCAPI bool playerMayDestroy(::Player& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ChalkboardSize const getChalkboardSize() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::ChalkboardBlockActor::CachedMessageData&
    setCachedMessage(::ChalkboardBlockActor::CachedMessageData cachedMessage);

    MCAPI void setText(::std::string const& text, ::TextObjectRoot&& root);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getLocked() const;

    MCNAPI int getRotation(::BlockSource&) const;

    MCNAPI std::string const& getText() const;

    MCNAPI int getTextCharCount() const;

    MCNAPI std::string const& getUnfilteredText() const;

    MCNAPI int getWidth() const;

    MCNAPI bool isBaseChalkboard() const;

    MCNAPI bool isInitialized() const;

    MCNAPI bool isOnGround() const;

    MCNAPI bool playerMayDestroy(::Player&) const;

    MCNAPI bool playerMayEdit(::Player&) const;

    MCNAPI bool playerMayToggleLock(::Player&) const;

    MCNAPI ::ChalkboardBlockActor::CachedMessageData& setCachedMessage(::ChalkboardBlockActor::CachedMessageData);

    MCNAPI void setLocked(bool);

    MCNAPI void setText(std::string const&);

    MCNAPI void setText(std::string const&, ::TextObjectRoot&&);

    MCNAPI bool shouldPersistFormatting() const;

    MCNAPI void validate(::BlockSource&);
#else // @header-generator platform
    MCAPI void validate(::BlockSource& region);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<BlockPos> calculateAllBlocks(::BlockPos const&, ::ChalkboardSize, int);
#else // @header-generator platform
    MCAPI static ::std::vector<::BlockPos>
    calculateAllBlocks(::BlockPos const& basePos, ::ChalkboardSize boardSize, int dir);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool canCreateChalkboard(
        ::Actor*,
        ::BlockSource&,
        ::BlockPos const&,
        ::ChalkboardSize,
        uchar,
        int,
        std::vector<BlockPos>&,
        ::ItemStack const&,
        bool
#else // @header-generator platform
    MCAPI static bool canCreateChalkboard(
        ::Actor*                   creator,
        ::BlockSource&             region,
        ::BlockPos const&          basePos,
        ::ChalkboardSize           boardSize,
        uchar                      face,
        int                        dir,
        ::std::vector<::BlockPos>& occupiedBlocks,
        ::ItemStack const&         instance,
        bool                       generateParticles
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ChalkboardBlockActor* convertFromEntity(::BlockSource&, ::CompoundTag const&);
#else // @header-generator platform
    MCAPI static ::ChalkboardBlockActor* convertFromEntity(::BlockSource& region, ::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ChalkboardBlockActor* createChalkboard(
        ::Actor*,
        ::BlockSource&,
        ::BlockPos const&,
        ::ChalkboardSize,
        uchar,
        int,
        bool,
        ::ItemStack const&,
        std::string
#else // @header-generator platform
    MCAPI static ::ChalkboardBlockActor* createChalkboard(
        ::Actor*           creator,
        ::BlockSource&     region,
        ::BlockPos const&  basePos,
        ::ChalkboardSize   boardSize,
        uchar              face,
        int                dir,
        bool               isOnGround,
        ::ItemStack const& instance,
        ::std::string      text
#endif // @header-generator platform
    );
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCAPI void $onChanged(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCAPI void $tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
#else // @header-generator platform
    MCAPI ::std::string $getImmersiveReaderText(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getImmersiveReaderText(::BlockSource&);
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> $getUgcStrings(::CompoundTag const& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> $getUgcStrings(::CompoundTag const&) const;
#else // @header-generator platform
    MCAPI void $setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChanged(::BlockSource&);
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
