#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/UITextureInfo.h"
#include "mc/client/gui/interface/IUIRepository.h"
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
class ResourceLoader;
class UITextureInfoPtr;
// clang-format on

class UIRepository : public ::IUIRepository {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<ResourceLocation, UITextureInfo>> mLoadedUITextureInfo;
    ::ll::TypedStorage<8, 8, ::ResourceLoader&>                          mResourceLoader;
    ::ll::TypedStorage<8, 40, std::unordered_set<UITextureInfoPtr*>>     mRegisteredPtrs;
    // NOLINTEND

public:
    // prevent constructor by default
    UIRepository& operator=(UIRepository const&);
    UIRepository(UIRepository const&);
    UIRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIRepository();

    virtual void clearLoadedUITextureInfo();

    virtual void reloadGroup();

    virtual void addRef(::UITextureInfoPtr&);

    virtual void removeRef(::UITextureInfoPtr&);

    virtual ::UITextureInfoPtr getUITextureInfoPtr(::ResourceLocation const&, bool);

    virtual ::UITextureInfo* getUITextureInfo(::ResourceLocation const&, bool, bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UIRepository(::ResourceLoader&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourceLoader&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $clearLoadedUITextureInfo();

    MCNAPI void $reloadGroup();

    MCNAPI void $addRef(::UITextureInfoPtr&);

    MCNAPI void $removeRef(::UITextureInfoPtr&);

    MCNAPI ::UITextureInfoPtr $getUITextureInfoPtr(::ResourceLocation const&, bool);

    MCNAPI ::UITextureInfo* $getUITextureInfo(::ResourceLocation const&, bool, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
