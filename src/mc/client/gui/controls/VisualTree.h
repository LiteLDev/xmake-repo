#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/controls/ControlScreenAction.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
class UIControl;
class UIControlFactory;
class UIMeasureStrategy;
class VisualTreeProxy;
namespace Json { class Value; }
// clang-format on

class VisualTree : public ::ControlScreenAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<UIControl>>                              mRootControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>>                                mInitialSelectedControl;
    ::ll::TypedStorage<8, 24, std::string>                                             mRootControlName;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                                          mDirty;
    ::ll::TypedStorage<1, 1, bool>                                                     mClearPersistantMeshes;
    ::ll::TypedStorage<8, 8, ::UIMeasureStrategy*>                                     mMeasureStrategy;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<void*, std::weak_ptr<UIControl>>>> mNeedsToRemoveDeadDependencies;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>>                 mControlsToUpdate;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>>                 mControlsToUpdateBacklog;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>>                 mControlsToRemoveFromCollections;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>>                 mControlsToBind;
    ::ll::TypedStorage<1, 1, bool>                                                     mUpdateCollectionsFromRoot;
    ::ll::TypedStorage<1, 1, bool>                                                     mUpdateBindsFromRoot;
    ::ll::TypedStorage<1, 1, bool>                                                     mTextEditFocusChanged;
    ::ll::TypedStorage<1, 1, bool>                                                     mTextEditAlwaysListeningChanged;
    ::ll::TypedStorage<1, 1, bool>                                                     mRootControlDestroyed;
    ::ll::TypedStorage<1, 1, bool>                                                     mRootControlWasInitialized;
    ::ll::UntypedStorage<8, 16>                                                        mInitGlobalVars;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VisualTreeProxy>>                         mProxy;
    // NOLINTEND

public:
    // prevent constructor by default
    VisualTree();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VisualTree();

    virtual bool getDirty(::ui::DirtyFlag);

    virtual bool getDirty();

    virtual ::ui::DirtyFlag getDirtyValue();

    virtual void addDirtyFlag(::ui::DirtyFlag);

    virtual void measureControls(::UIControl&);

    virtual void markToRemoveDeadDependencies(std::shared_ptr<UIControl>);

    virtual void updateControlCollection(std::shared_ptr<UIControl>);

    virtual void updateControlCollectionFromRoot();

    virtual void removeFromControlCollection(std::shared_ptr<UIControl>);

    virtual void updateControlBinds(std::shared_ptr<UIControl>);

    virtual void updateBindsFromRoot();

    virtual void markTextEditFocusChanged();

    virtual void markTextEditAlwaysListeningChanged();

    virtual std::shared_ptr<UIControl> getControlWithName(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VisualTree(std::string const&, ::Json::Value const&);

    MCNAPI void clearBindUpdateFromRoot();

    MCNAPI void clearControlCollectionUpdateFromRoot();

    MCNAPI void clearControlsToBind();

    MCNAPI void clearControlsToRemoveFromCollections();

    MCNAPI void clearControlsUpdate(bool);

    MCNAPI void clearTextEditAlwaysListeningChanged();

    MCNAPI void clearTextEditFocusChanged();

    MCNAPI void destroyAsync(::TaskGroup&);

    MCNAPI void foreachVisibleControls(std::function<void(UIControl&)>) const;

    MCNAPI bool getClearPersistantMeshes();

    MCNAPI std::shared_ptr<UIControl> getControlByName(std::string const&, bool);

    MCNAPI std::vector<std::shared_ptr<UIControl>> getControls(std::function<bool(const UIControl&)>);

    MCNAPI std::vector<std::shared_ptr<UIControl>>&& getControlsToBind();

    MCNAPI std::vector<std::shared_ptr<UIControl>> const& getControlsToRemoveFromCollections();

    MCNAPI std::vector<std::shared_ptr<UIControl>> const& getControlsToUpdate();

    MCNAPI std::shared_ptr<UIControl> getFirstControl(std::function<bool(const UIControl&)> const&);

    MCNAPI std::shared_ptr<UIControl> getFirstControl(::UIControl&, std::function<bool(const UIControl&)> const&);

    MCNAPI std::shared_ptr<UIControl> getFirstVisibleControl(std::function<bool(const UIControl&)> const&);

    MCNAPI ::Json::Value const& getInitGlobalVars() const;

    MCNAPI std::shared_ptr<UIControl> getInitialSelectedControl() const;

    MCNAPI ::VisualTreeProxy* getProxy();

    MCNAPI std::shared_ptr<UIControl> getRootControl();

    MCNAPI std::vector<std::shared_ptr<UIControl>> getVisibleControls(std::function<bool(const UIControl&)>);

    MCNAPI bool hasControlsToBind() const;

    MCNAPI bool hasControlsToUpdate();

    MCNAPI void initRootControl(std::shared_ptr<UIControl>);

    MCNAPI bool needsControlBindsFromRoot() const;

    MCNAPI bool needsControlCollectionUpdateFromRoot() const;

    MCNAPI std::unique_ptr<VisualTree> recreateControlTree(::UIControlFactory&);

    MCNAPI void removeDeadDependencies();

    MCNAPI void removeDirtyFlag(::ui::DirtyFlag);

    MCNAPI void reset();

    MCNAPI void setClearPersistantMeshes(bool);

    MCNAPI void setDirty(bool);

    MCNAPI void setInitialSelectedControl(std::shared_ptr<UIControl>);

    MCNAPI void setMeasureStrategy(::UIMeasureStrategy*);

    MCNAPI void setRootControlName(std::string const&);

    MCNAPI void storeGlobalVars(::Json::Value const&);

    MCNAPI bool textEditAlwaysListeningChanged() const;

    MCNAPI bool textEditFocusChanged() const;

    MCNAPI void visitTree(::UIControl*, std::function<bool(UIControl&, int, bool)> const);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _destroyAsync(::TaskGroup&, std::shared_ptr<UIControl>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, ::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $getDirty(::ui::DirtyFlag);

    MCNAPI bool $getDirty();

    MCNAPI ::ui::DirtyFlag $getDirtyValue();

    MCNAPI void $addDirtyFlag(::ui::DirtyFlag);

    MCNAPI void $measureControls(::UIControl&);

    MCNAPI void $markToRemoveDeadDependencies(std::shared_ptr<UIControl>);

    MCNAPI void $updateControlCollection(std::shared_ptr<UIControl>);

    MCNAPI void $updateControlCollectionFromRoot();

    MCNAPI void $removeFromControlCollection(std::shared_ptr<UIControl>);

    MCNAPI void $updateControlBinds(std::shared_ptr<UIControl>);

    MCNAPI void $updateBindsFromRoot();

    MCNAPI void $markTextEditFocusChanged();

    MCNAPI void $markTextEditAlwaysListeningChanged();

    MCNAPI std::shared_ptr<UIControl> $getControlWithName(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/controls/ControlScreenAction.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
class UIControl;
class UIControlFactory;
class UIMeasureStrategy;
class VisualTreeProxy;
// clang-format on

class VisualTree : public ::ControlScreenAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControl>> mRootControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>   mInitialSelectedControl;
    ::ll::TypedStorage<8, 32, ::std::string>                  mRootControlName;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                 mDirty;
    ::ll::TypedStorage<1, 1, bool>                            mClearPersistantMeshes;
    ::ll::TypedStorage<8, 8, ::UIMeasureStrategy*>            mMeasureStrategy;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<void*, ::std::weak_ptr<::UIControl>>>>
                                                                             mNeedsToRemoveDeadDependencies;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mControlsToUpdate;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mControlsToUpdateBacklog;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mControlsToRemoveFromCollections;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mControlsToBind;
    ::ll::TypedStorage<1, 1, bool>                                           mUpdateCollectionsFromRoot;
    ::ll::TypedStorage<1, 1, bool>                                           mUpdateBindsFromRoot;
    ::ll::TypedStorage<1, 1, bool>                                           mTextEditFocusChanged;
    ::ll::TypedStorage<1, 1, bool>                                           mTextEditAlwaysListeningChanged;
    ::ll::TypedStorage<1, 1, bool>                                           mRootControlDestroyed;
    ::ll::TypedStorage<1, 1, bool>                                           mRootControlWasInitialized;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                 mInitGlobalVars;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VisualTreeProxy>>           mProxy;
    // NOLINTEND

public:
    // prevent constructor by default
    VisualTree();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VisualTree() /*override*/;

    virtual ::std::shared_ptr<::UIControl> getControlWithName(::std::string const& name) /*override*/;

    virtual bool getDirty() /*override*/;

    virtual bool getDirty(::ui::DirtyFlag flag) /*override*/;

    virtual ::ui::DirtyFlag getDirtyValue() /*override*/;

    virtual void addDirtyFlag(::ui::DirtyFlag flag) /*override*/;

    virtual void measureControls(::UIControl& measureRoot) /*override*/;

    virtual void markToRemoveDeadDependencies(::std::shared_ptr<::UIControl> control) /*override*/;

    virtual void updateControlCollection(::std::shared_ptr<::UIControl> control) /*override*/;

    virtual void updateControlCollectionFromRoot() /*override*/;

    virtual void removeFromControlCollection(::std::shared_ptr<::UIControl> control) /*override*/;

    virtual void updateControlBinds(::std::shared_ptr<::UIControl> control) /*override*/;

    virtual void updateBindsFromRoot() /*override*/;

    virtual void markTextEditFocusChanged() /*override*/;

    virtual void markTextEditAlwaysListeningChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VisualTree(::std::string const& rootControlName, ::Json::Value const& initGlobalVars);

    MCAPI ::std::shared_ptr<::UIControl> getControlByName(::std::string const& name, bool visibleOnly);

    MCAPI ::std::vector<::std::shared_ptr<::UIControl>>
    getControls(::std::function<bool(::UIControl const&)> predicate);

    MCAPI ::std::vector<::std::shared_ptr<::UIControl>>
    getVisibleControls(::std::function<bool(::UIControl const&)> predicate);

    MCAPI ::std::unique_ptr<::VisualTree> recreateControlTree(::UIControlFactory& controlFactory);

    MCAPI void removeDeadDependencies();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _destroyAsync(::TaskGroup& taskGroup, ::std::shared_ptr<::UIControl> control);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& rootControlName, ::Json::Value const& initGlobalVars);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UIControl> $getControlWithName(::std::string const& name);

    MCAPI bool $getDirty();

    MCAPI bool $getDirty(::ui::DirtyFlag flag);

    MCFOLD ::ui::DirtyFlag $getDirtyValue();

    MCAPI void $addDirtyFlag(::ui::DirtyFlag flag);

    MCAPI void $measureControls(::UIControl& measureRoot);

    MCAPI void $markToRemoveDeadDependencies(::std::shared_ptr<::UIControl> control);

    MCAPI void $updateControlCollection(::std::shared_ptr<::UIControl> control);

    MCAPI void $updateControlCollectionFromRoot();

    MCAPI void $removeFromControlCollection(::std::shared_ptr<::UIControl> control);

    MCAPI void $updateControlBinds(::std::shared_ptr<::UIControl> control);

    MCAPI void $updateBindsFromRoot();

    MCAPI void $markTextEditFocusChanged();

    MCAPI void $markTextEditAlwaysListeningChanged();
    // NOLINTEND
};
#else // @header-generator platform
class VisualTree {};
#endif // @header-generator platform
#endif // @header-generator platform
