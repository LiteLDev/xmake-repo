#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class UITextureInfo;
class UITextureInfoPtr;
// clang-format on

class IUIRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // IUIRepository inner types define
    using UITextureInfoMap = std::map<ResourceLocation, UITextureInfo>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void clearLoadedUITextureInfo() = 0;

    virtual void reloadGroup() = 0;

    virtual void addRef(::UITextureInfoPtr&) = 0;

    virtual void removeRef(::UITextureInfoPtr&) = 0;

    virtual ::UITextureInfoPtr getUITextureInfoPtr(::ResourceLocation const&, bool) = 0;

    virtual ::UITextureInfo* getUITextureInfo(::ResourceLocation const&, bool, bool) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class UITextureInfo;
class UITextureInfoPtr;
// clang-format on

class IUIRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // IUIRepository inner types define
    using UITextureInfoMap = ::std::map<::ResourceLocation, ::UITextureInfo>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void clearLoadedUITextureInfo() = 0;

    virtual void reloadGroup() = 0;

    virtual void addRef(::UITextureInfoPtr& ptr) = 0;

    virtual void removeRef(::UITextureInfoPtr& ptr) = 0;

    virtual ::UITextureInfoPtr getUITextureInfoPtr(::ResourceLocation const& resourceLocation, bool forceReload) = 0;

    virtual ::UITextureInfo*
    getUITextureInfo(::ResourceLocation const& resourceLocation, bool forceReload, bool loadIfNeeded) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IUIRepository {};
#endif // @header-generator platform
#endif // @header-generator platform
