#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/input/InputMode.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/packet/OpenSignPacket.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/textobject/TextObjectRoot.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/SignTextSide.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class IConstBlockSource;
class ILevel;
class Player;
class SaveContext;
class Vec3;
// clang-format on

class SignBlockActor : public ::VanillaBlockActor {
public:
    // SignBlockActor inner types declare
    // clang-format off
    struct CachedLineData;
    struct CachedMessageData;
    struct OpenSignRequest;
    class Text;
    // clang-format on

    // SignBlockActor inner types define
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
        ::ll::TypedStorage<8, 128, ::SignBlockActor::CachedLineData[4]> lineData;
        ::ll::TypedStorage<4, 4, uint>                                  numLines;
        ::ll::TypedStorage<8, 24, std::string>                          filteredMessage;
        ::ll::TypedStorage<8, 8, void const*>                           cachedFontCompare;
        ::ll::TypedStorage<1, 1, bool>                                  dirty;
        ::ll::TypedStorage<4, 4, ::InputMode>                           inputMode;
        ::ll::TypedStorage<4, 4, ::NewInteractionModel>                 interactionModel;
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

    struct OpenSignRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mIsWaitingForChangeClear;
        ::ll::UntypedStorage<8, 72>    mOpenSignPacket;
        ::ll::UntypedStorage<8, 64>    mSendPacket;
        // NOLINTEND

    public:
        // prevent constructor by default
        OpenSignRequest& operator=(OpenSignRequest const&);
        OpenSignRequest(OpenSignRequest const&);
        OpenSignRequest();
    };

    class Text {
    public:
        // Text inner types define
        enum class LoadMode : int {
            TextOnly = 0,
            AllData  = 1,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                          mMessage;
        ::ll::TypedStorage<8, 24, std::string>                          mFilteredMessage;
        ::ll::TypedStorage<8, 32, ::TextObjectRoot>                     mTextObjectMessage;
        ::ll::TypedStorage<8, 184, ::SignBlockActor::CachedMessageData> mCachedMessage;
        ::ll::TypedStorage<4, 16, ::mce::Color>                         mSignTextColor;
        ::ll::TypedStorage<1, 1, bool>                                  mGlowing;
        ::ll::TypedStorage<1, 1, bool>                                  mHideGlowOutline;
        ::ll::TypedStorage<1, 1, bool>                                  mShouldPersistFormatting;
        ::ll::TypedStorage<8, 24, std::string>                          mLastEditXuid;
        ::ll::TypedStorage<8, 24, std::string>                          mTextObjectString;
        // NOLINTEND

    public:
        // prevent constructor by default
        Text& operator=(Text const&);
        Text(Text const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void _parseOldVersionText(::CompoundTag const&);

        MCNAPI void _parseOtherAttributes(::CompoundTag const&);

        MCNAPI void _parseText(::CompoundTag const&);

        MCNAPI void clearCachedMessage();

        MCNAPI ::SignBlockActor::CachedMessageData const& getCachedMessage() const;

        MCNAPI ::mce::Color const& getColor() const;

        MCNAPI bool const getHideGlowOutline() const;

        MCNAPI std::string const& getMessage() const;

        MCNAPI ::TextObjectRoot const& getTextObject() const;

        MCNAPI bool const isGlowing() const;

        MCNAPI void load(::CompoundTag const&, ::SignBlockActor::Text::LoadMode);

        MCNAPI bool save(::CompoundTag&) const;

        MCNAPI void setCachedMessage(::SignBlockActor::CachedMessageData);

        MCNAPI void setColor(::mce::Color const&);

        MCNAPI void setEditedBy(std::string const&);

        MCNAPI void setGlowing(bool);

        MCNAPI void setHideGlowOutline(bool);

        MCNAPI void setMessage(std::string);

        MCNAPI void setMessage(::TextObjectRoot);

        MCNAPI bool shouldPersistFormatting() const;

        MCNAPI ~Text();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static bool validateText(::CompoundTag const&);
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::std::add_lvalue_reference_t<char const[18]> SIGN_PERSIST_FORMATTING_TAG();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<SignBlockActor::Text>> mTextFront;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SignBlockActor::Text>> mTextBack;
    ::ll::TypedStorage<1, 1, bool>                                  mIsWaxed;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                       mLockedForEditingBy;
    ::ll::UntypedStorage<8, 160>                                    mOpenSignRequest;
    ::ll::TypedStorage<1, 1, bool>                                  mIsRemoteProfanityFilterEnabled;
    ::ll::UntypedStorage<1, 15>                                     mIsLocalProfanityFilterEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    SignBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SignBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual bool isTypeOrDerived(::BlockActorType) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual bool _playerCanUpdate(::Player const&) const;

    virtual float getShadowRadius(::BlockSource&) const;

    virtual void tick(::BlockSource&);

    virtual std::string getImmersiveReaderText(::BlockSource&);

    virtual std::vector<std::string> getUgcStrings(::CompoundTag const&) const;

    virtual std::vector<std::string> getFilteredUgcStrings(::CompoundTag const&) const;

    virtual void setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;

    virtual void setFilteredUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;

    virtual bool validateData(::CompoundTag const&) const;

    virtual void onChanged(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SignBlockActor(::BlockPos const&, ::BlockActorType, ::BlockActorRendererId);

    MCNAPI ::SignBlockActor::CachedMessageData const& getCachedMessage(::SignTextSide) const;

    MCNAPI bool getHideGlowOutline(::SignTextSide) const;

    MCNAPI bool getIsGlowing(::SignTextSide) const;

    MCNAPI bool getIsLockedForEditing(::ILevel&);

    MCNAPI bool getIsWaxed() const;

    MCNAPI std::string const& getMessage(::SignTextSide) const;

    MCNAPI std::string const& getRawMessage(::SignTextSide) const;

    MCNAPI ::SignTextSide getSideFacingPlayer(::Player const&) const;

    MCNAPI ::mce::Color const& getSignTextColor(::SignTextSide) const;

    MCNAPI ::TextObjectRoot const& getTextObject(::SignTextSide) const;

    MCNAPI bool isStringMessage(::SignTextSide) const;

    MCNAPI void requestToSendOpenSignPacket(::WeakRef<EntityContext>, ::BlockPos const&, bool);

    MCNAPI void serverOnlySetIsLockedForEditing(::Player&);

    MCNAPI void setCachedMessage(::SignTextSide, ::SignBlockActor::CachedMessageData);

    MCNAPI void setHideGlowOutline(::SignTextSide, bool);

    MCNAPI void setIsGlowing(::SignTextSide, bool);

    MCNAPI void setMessage(::SignTextSide, std::string);

    MCNAPI void setMessage(::SignTextSide, ::TextObjectRoot);

    MCNAPI void setMessageForServerScripingOnly(::SignTextSide, ::TextObjectRoot, std::string);

    MCNAPI void setMessageForServerScripingOnly(::SignTextSide, std::string, std::string);

    MCNAPI void setSignTextColor(::SignTextSide, ::mce::Color const&);

    MCNAPI void setWaxed(bool);

    MCNAPI bool shouldPersistFormatting(::SignTextSide) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&, ::BlockActorType, ::BlockActorRendererId);
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

    MCNAPI bool $isTypeOrDerived(::BlockActorType) const;

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI bool $_playerCanUpdate(::Player const&) const;

    MCNAPI float $getShadowRadius(::BlockSource&) const;

    MCNAPI void $tick(::BlockSource&);

    MCNAPI std::string $getImmersiveReaderText(::BlockSource&);

    MCNAPI std::vector<std::string> $getUgcStrings(::CompoundTag const&) const;

    MCNAPI std::vector<std::string> $getFilteredUgcStrings(::CompoundTag const&) const;

    MCNAPI void $setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;

    MCNAPI void $setFilteredUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;

    MCNAPI bool $validateData(::CompoundTag const&) const;

    MCNAPI void $onChanged(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
