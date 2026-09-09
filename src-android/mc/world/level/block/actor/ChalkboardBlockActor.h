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
class BlockActor;
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class IConstBlockSource;
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
        ::ll::TypedStorage<8, 24, std::string> text;
        ::ll::TypedStorage<4, 4, int>          lineLength;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedLineData& operator=(CachedLineData const&);
        CachedLineData(CachedLineData const&);
    };

    struct CachedMessageData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 512, std::array<ChalkboardBlockActor::CachedLineData, 16>> lineData;
        ::ll::TypedStorage<4, 4, uint>                                                   numLines;
        ::ll::TypedStorage<8, 24, std::string>                                           filteredMessage;
        ::ll::TypedStorage<8, 8, void const*>                                            cachedFontCompare;
        ::ll::TypedStorage<1, 1, bool>                                                   dirty;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedMessageData& operator=(CachedMessageData const&);
        CachedMessageData(CachedMessageData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CachedMessageData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
        MCNAPI bool confirmedBroken(::ChalkboardBlockActor&, ::BlockSource&) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                mText;
    ::ll::TypedStorage<8, 24, std::string>                                mTextObjectString;
    ::ll::TypedStorage<8, 32, ::TextObjectRoot>                           mTextObjectMessage;
    ::ll::TypedStorage<8, 560, ::ChalkboardBlockActor::CachedMessageData> mCachedMessage;
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>>                      mSiblings;
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
    virtual ~ChalkboardBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void tick(::BlockSource&);

    virtual std::string getImmersiveReaderText(::BlockSource&);

    virtual std::vector<std::string> getUgcStrings(::CompoundTag const&) const;

    virtual void setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;

    virtual void onChanged(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ChalkboardBlockActor const* getBaseChalkboard(::IConstBlockSource const&) const;

    MCNAPI ::ChalkboardBlockActor* getBaseChalkboard(::BlockSource&) const;

    MCNAPI ::ChalkboardBlockActor::CachedMessageData const& getCachedMessage() const;

    MCNAPI ::ChalkboardSize const getChalkboardSize() const;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<BlockPos> calculateAllBlocks(::BlockPos const&, ::ChalkboardSize, int);

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
    );

    MCNAPI static ::ChalkboardBlockActor* convertFromEntity(::BlockSource&, ::CompoundTag const&);

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
    );
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

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI void $tick(::BlockSource&);

    MCNAPI std::string $getImmersiveReaderText(::BlockSource&);

    MCNAPI std::vector<std::string> $getUgcStrings(::CompoundTag const&) const;

    MCNAPI void $setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;

    MCNAPI void $onChanged(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
