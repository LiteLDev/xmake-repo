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
#if defined(LL_PLAT_A) // @header-generator platform
class IConstBlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class ILevel;
class Player;
class SaveContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
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
        ::ll::TypedStorage<8, 128, ::SignBlockActor::CachedLineData[4]> lineData;
#else // @header-generator platform
        ::ll::TypedStorage<8, 160, ::SignBlockActor::CachedLineData[4]> lineData;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, uint>                                  numLines;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                          filteredMessage;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>                        filteredMessage;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 8, void const*>                           cachedFontCompare;
        ::ll::TypedStorage<1, 1, bool>                                  dirty;
        ::ll::TypedStorage<4, 4, ::InputMode>                           inputMode;
        ::ll::TypedStorage<4, 4, ::NewInteractionModel>                 interactionModel;
        // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        CachedMessageData& operator=(CachedMessageData const&);
        CachedMessageData(CachedMessageData const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        CachedMessageData& operator=(CachedMessageData const&);
        CachedMessageData();

#endif
#endif // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~CachedMessageData();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI CachedMessageData(::SignBlockActor::CachedMessageData const&);

        MCAPI ::SignBlockActor::CachedMessageData& operator=(::SignBlockActor::CachedMessageData&&);

        MCAPI ~CachedMessageData();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI void* $ctor(::SignBlockActor::CachedMessageData const&);
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

    struct OpenSignRequest {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool> mIsWaitingForChangeClear;
        ::ll::UntypedStorage<8, 72>    mOpenSignPacket;
        ::ll::UntypedStorage<8, 64>    mSendPacket;
#else // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                                                  mIsWaitingForChangeClear;
        ::ll::TypedStorage<8, 72, ::OpenSignPacket>                                     mOpenSignPacket;
        ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void(::OpenSignPacket&)>> mSendPacket;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        OpenSignRequest& operator=(OpenSignRequest const&);
        OpenSignRequest(OpenSignRequest const&);
        OpenSignRequest();
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                          mMessage;
        ::ll::TypedStorage<8, 24, std::string>                          mFilteredMessage;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>                        mMessage;
        ::ll::TypedStorage<8, 32, ::std::string>                        mFilteredMessage;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 32, ::TextObjectRoot>                     mTextObjectMessage;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 184, ::SignBlockActor::CachedMessageData> mCachedMessage;
#else // @header-generator platform
        ::ll::TypedStorage<8, 224, ::SignBlockActor::CachedMessageData> mCachedMessage;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 16, ::mce::Color>                         mSignTextColor;
        ::ll::TypedStorage<1, 1, bool>                                  mGlowing;
        ::ll::TypedStorage<1, 1, bool>                                  mHideGlowOutline;
        ::ll::TypedStorage<1, 1, bool>                                  mShouldPersistFormatting;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                          mLastEditXuid;
        ::ll::TypedStorage<8, 24, std::string>                          mTextObjectString;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>                        mLastEditXuid;
        ::ll::TypedStorage<8, 32, ::std::string>                        mTextObjectString;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        Text& operator=(Text const&);
        Text(Text const&);
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void _parseOldVersionText(::CompoundTag const&);
#else // @header-generator platform
        MCAPI ::std::string const& getMessage() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void _parseOtherAttributes(::CompoundTag const&);
#else // @header-generator platform
        MCAPI void load(::CompoundTag const& tag, ::SignBlockActor::Text::LoadMode load);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void _parseText(::CompoundTag const&);
#else // @header-generator platform
        MCAPI bool save(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void clearCachedMessage();
#else // @header-generator platform
        MCAPI void setMessage(::std::string message);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::SignBlockActor::CachedMessageData const& getCachedMessage() const;
#else // @header-generator platform
        MCAPI void setMessage(::TextObjectRoot message);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        MCAPI ~Text();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static ::std::add_lvalue_reference_t<char const[18]> SIGN_PERSIST_FORMATTING_TAG();
#else // @header-generator platform
        MCAPI static ::std::add_lvalue_reference_t<char const[18]> SIGN_PERSIST_FORMATTING_TAG();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<SignBlockActor::Text>> mTextFront;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SignBlockActor::Text>> mTextBack;
    ::ll::TypedStorage<1, 1, bool>                                  mIsWaxed;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                       mLockedForEditingBy;
    ::ll::UntypedStorage<8, 160>                                    mOpenSignRequest;
    ::ll::TypedStorage<1, 1, bool>                                  mIsRemoteProfanityFilterEnabled;
    ::ll::UntypedStorage<1, 15>                                     mIsLocalProfanityFilterEnabled;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SignBlockActor::Text>>            mTextFront;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SignBlockActor::Text>>            mTextBack;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsWaxed;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                      mLockedForEditingBy;
    ::ll::TypedStorage<8, 152, ::std::optional<::SignBlockActor::OpenSignRequest>> mOpenSignRequest;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsRemoteProfanityFilterEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsLocalProfanityFilterEnabled;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SignBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SignBlockActor();
#else // @header-generator platform
    virtual ~SignBlockActor() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual bool isTypeOrDerived(::BlockActorType type) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isTypeOrDerived(::BlockActorType) const;
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
    virtual float getShadowRadius(::BlockSource& region) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _playerCanUpdate(::Player const&) const;
#else // @header-generator platform
    virtual ::std::string getImmersiveReaderText(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getShadowRadius(::BlockSource&) const;
#else // @header-generator platform
    virtual void tick(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&);
#else // @header-generator platform
    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getImmersiveReaderText(::BlockSource&);
#else // @header-generator platform
    virtual ::std::vector<::std::string> getFilteredUgcStrings(::CompoundTag const& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> getUgcStrings(::CompoundTag const&) const;
#else // @header-generator platform
    virtual void setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> getFilteredUgcStrings(::CompoundTag const&) const;
#else // @header-generator platform
    virtual void setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;
#else // @header-generator platform
    virtual bool validateData(::CompoundTag const& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setFilteredUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool validateData(::CompoundTag const&) const;
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChanged(::BlockSource&);
#else // @header-generator platform
    virtual bool _playerCanUpdate(::Player const& fromPlayer) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SignBlockActor(::BlockPos const&, ::BlockActorType, ::BlockActorRendererId);
#else // @header-generator platform
    MCAPI SignBlockActor(::BlockPos const& pos, ::BlockActorType blockActorType, ::BlockActorRendererId rendererId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SignBlockActor::CachedMessageData const& getCachedMessage(::SignTextSide) const;
#else // @header-generator platform
    MCAPI ::std::string const& getMessage(::SignTextSide side) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getHideGlowOutline(::SignTextSide) const;
#else // @header-generator platform
    MCAPI ::SignTextSide getSideFacingPlayer(::Player const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getIsGlowing(::SignTextSide) const;
#else // @header-generator platform
    MCAPI void
    requestToSendOpenSignPacket(::WeakRef<::EntityContext> entityRef, ::BlockPos const& position, bool isFrontSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getIsLockedForEditing(::ILevel&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setMessage(::SignTextSide side, ::std::string message);

    MCAPI void setMessage(::SignTextSide side, ::TextObjectRoot message);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getIsWaxed() const;
#else // @header-generator platform
    MCAPI void setMessageForServerScripingOnly(::SignTextSide side, ::std::string message, ::std::string ownerID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void setMessageForServerScripingOnly(::SignTextSide side, ::TextObjectRoot message, ::std::string ownerID);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockPos const&, ::BlockActorType, ::BlockActorRendererId);
#else // @header-generator platform
    MCAPI void* $ctor(::BlockPos const& pos, ::BlockActorType blockActorType, ::BlockActorRendererId rendererId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI bool $isTypeOrDerived(::BlockActorType type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTypeOrDerived(::BlockActorType) const;
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCFOLD void $onChanged(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCAPI float $getShadowRadius(::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_playerCanUpdate(::Player const&) const;
#else // @header-generator platform
    MCAPI ::std::string $getImmersiveReaderText(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getShadowRadius(::BlockSource&) const;
#else // @header-generator platform
    MCAPI void $tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> $getUgcStrings(::CompoundTag const& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getImmersiveReaderText(::BlockSource&);
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> $getFilteredUgcStrings(::CompoundTag const& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> $getUgcStrings(::CompoundTag const&) const;
#else // @header-generator platform
    MCAPI void $setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> $getFilteredUgcStrings(::CompoundTag const&) const;
#else // @header-generator platform
    MCAPI void $setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;
#else // @header-generator platform
    MCAPI bool $validateData(::CompoundTag const& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setFilteredUgcStrings(::CompoundTag&, std::vector<std::string> const&) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $validateData(::CompoundTag const&) const;
#else // @header-generator platform
    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChanged(::BlockSource&);
#else // @header-generator platform
    MCAPI bool $_playerCanUpdate(::Player const& fromPlayer) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();
#endif // @header-generator platform
    // NOLINTEND
};
