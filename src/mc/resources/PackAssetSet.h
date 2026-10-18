#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/PackAccessState.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
struct EncryptedAssetInfo;
namespace Core { class Path; }
// clang-format on

class PackAssetSet {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::PackAccessState> mAccessState;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk737292;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PackAssetSet& operator=(PackAssetSet const&);
    PackAssetSet(PackAssetSet const&);
    PackAssetSet();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackAssetSet() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addAsset(::Core::Path, ::EncryptedAssetInfo) = 0;
#else // @header-generator platform
    virtual void addAsset(::Core::Path path, ::EncryptedAssetInfo info) = 0;
#endif // @header-generator platform

    virtual void clear() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasAsset(::Core::Path const&, bool) const = 0;
#else // @header-generator platform
    virtual bool hasAsset(::Core::Path const& path, bool caseSensitive) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EncryptedAssetInfo const* getEncryptedAssetInfo(::Core::Path const&, bool) const = 0;
#else // @header-generator platform
    virtual ::EncryptedAssetInfo const* getEncryptedAssetInfo(::Core::Path const& path, bool caseSensitive) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachAsset(::brstd::function_ref<void(const Core::Path&)>) const = 0;
#else // @header-generator platform
    virtual void forEachAsset(::brstd::function_ref<void(::Core::Path const&)> callback) const = 0;
#endif // @header-generator platform

    virtual bool isEmpty() const = 0;
    // NOLINTEND
};
