#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/BlockScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/StructureBlockType.h"
#include "mc/world/level/levelgen/structure/StructureEditorData.h"
#include "mc/world/level/levelgen/structure/StructureTelemetryClientData.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class MinecraftglTFExporter;
class Player;
class StructureBlockActor;
class StructureTemplate;
struct ActorUniqueID;
struct TextEditScreenEventData;
namespace Json { class Value; }
// clang-format on

class StructureEditorScreenController : public ::BlockScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/BlockScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/StructureEditorData.h"
#include "mc/world/level/levelgen/structure/StructureTelemetryClientData.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class MinecraftglTFExporter;
class Player;
class StructureTemplate;
struct ActorUniqueID;
struct TextEditScreenEventData;
namespace Json { class Value; }
// clang-format on

class StructureEditorScreenController : public ::BlockScreenController {
#else // @header-generator platform
class StructureEditorScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // StructureEditorScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class FilePickerType : uchar {
        EXPORT = 0,
        IMPORT = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos const>                       mBlockPos;
    ::ll::TypedStorage<1, 1, bool>                                    mAnimationModeDropdownActive;
    ::ll::TypedStorage<1, 1, bool>                                    mRedstoneDropdownActive;
    ::ll::TypedStorage<1, 1, bool>                                    mModeDropDownActive;
    ::ll::TypedStorage<1, 1, bool>                                    mTextBoxEditing;
    ::ll::TypedStorage<1, 1, bool>                                    mExportCompleted;
    ::ll::TypedStorage<1, 1, bool>                                    mExportSucceeded;
    ::ll::TypedStorage<1, 1, bool>                                    mRenderedStructure;
    ::ll::TypedStorage<1, 1, bool>                                    mIsExporting;
    ::ll::TypedStorage<1, 1, bool>                                    mIsImporting;
    ::ll::TypedStorage<1, 1, bool>                                    mNeedsBindsUpdate;
    ::ll::TypedStorage<1, 1, bool>                                    mMirrorX;
    ::ll::TypedStorage<1, 1, bool>                                    mMirrorZ;
    ::ll::TypedStorage<1, 1, bool>                                    mStructureExists;
    ::ll::TypedStorage<1, 1, bool>                                    mHasOpened;
    ::ll::TypedStorage<1, 1, bool>                                    mTrigger3dExport;
    ::ll::TypedStorage<1, 1, bool const>                              m3DExportSupport;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MinecraftglTFExporter>> mglTFExporter;
    ::ll::TypedStorage<8, 184, ::StructureEditorData>                 mStructureEditorData;
    ::ll::TypedStorage<8, 8, ::StructureTemplate*>                    mImportingStructureTemplate;
    ::ll::TypedStorage<4, 16, ::StructureTelemetryClientData>         mTelemetryClientData;
    ::ll::TypedStorage<8, 24, std::string>                            mAnimationTimeString;
    ::ll::TypedStorage<8, 24, std::string>                            mSeedString;
    ::ll::TypedStorage<1, 1, bool>                                    mShouldUseFilteredMessage;
    ::ll::UntypedStorage<8, 24>                                       mProfanityToggleSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureEditorScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureEditorScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onLeave();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual void addStaticScreenVars(::Json::Value&);

    virtual std::string _getButtonADescription();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureEditorScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID const
    );

    MCNAPI void _filePicker(::StructureEditorScreenController::FilePickerType);

    MCNAPI std::string _getTextEditValue(::TextEditScreenEventData&) const;

    MCNAPI float _getTextEditValueAsFloat(::TextEditScreenEventData&) const;

    MCNAPI int _getTextEditValueAsInt(::TextEditScreenEventData&) const;

    MCNAPI void _initiateFileGeneration();

    MCNAPI void _setSeedFromString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, ::Player&, ::BlockPos const&, ::ActorUniqueID const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI void $onLeave();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI std::string $_getButtonADescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class FilePickerType : uchar {
        Export = 0,
        Import = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos const>                           mBlockPos;
    ::ll::TypedStorage<1, 1, bool>                                        mAnimationModeDropdownActive;
    ::ll::TypedStorage<1, 1, bool>                                        mRedstoneDropdownActive;
    ::ll::TypedStorage<1, 1, bool>                                        mModeDropDownActive;
    ::ll::TypedStorage<1, 1, bool>                                        mTextBoxEditing;
    ::ll::TypedStorage<1, 1, bool>                                        mExportCompleted;
    ::ll::TypedStorage<1, 1, bool>                                        mExportSucceeded;
    ::ll::TypedStorage<1, 1, bool>                                        mRenderedStructure;
    ::ll::TypedStorage<1, 1, bool>                                        mIsExporting;
    ::ll::TypedStorage<1, 1, bool>                                        mIsImporting;
    ::ll::TypedStorage<1, 1, bool>                                        mNeedsBindsUpdate;
    ::ll::TypedStorage<1, 1, bool>                                        mMirrorX;
    ::ll::TypedStorage<1, 1, bool>                                        mMirrorZ;
    ::ll::TypedStorage<1, 1, bool>                                        mStructureExists;
    ::ll::TypedStorage<1, 1, bool>                                        mHasOpened;
    ::ll::TypedStorage<1, 1, bool>                                        mTrigger3dExport;
    ::ll::TypedStorage<1, 1, bool const>                                  m3DExportSupport;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MinecraftglTFExporter>> mglTFExporter;
    ::ll::TypedStorage<8, 216, ::StructureEditorData>                     mStructureEditorData;
    ::ll::TypedStorage<8, 8, ::StructureTemplate*>                        mImportingStructureTemplate;
    ::ll::TypedStorage<4, 16, ::StructureTelemetryClientData>             mTelemetryClientData;
    ::ll::TypedStorage<8, 32, ::std::string>                              mAnimationTimeString;
    ::ll::TypedStorage<8, 32, ::std::string>                              mSeedString;
    ::ll::TypedStorage<1, 1, bool>                                        mShouldUseFilteredMessage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mProfanityToggleSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureEditorScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureEditorScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onLeave() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureEditorScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCAPI void _filePicker(::StructureEditorScreenController::FilePickerType op);

    MCAPI ::std::string _getTextEditValue(::TextEditScreenEventData& textEditEvent) const;

    MCAPI void _initiateFileGeneration();

    MCAPI void _setSeedFromString();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static float _getTextEditValueAsFloat(::TextEditScreenEventData& textEditEvent);

    MCAPI static int _getTextEditValueAsInt(::TextEditScreenEventData& textEditEvent);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $onLeave();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);

    MCFOLD ::std::string $_getButtonADescription();
    // NOLINTEND
#else // @header-generator platform
    enum class FilePickerType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
};
