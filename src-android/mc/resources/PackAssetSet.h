#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PackAccessState.h"
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
    ::ll::TypedStorage<1, 1, ::PackAccessState> mAccessState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackAssetSet() = default;

    virtual void addAsset(::Core::Path, ::EncryptedAssetInfo) = 0;

    virtual void clear() = 0;

    virtual bool hasAsset(::Core::Path const&, bool) const = 0;

    virtual ::EncryptedAssetInfo const* getEncryptedAssetInfo(::Core::Path const&, bool) const = 0;

    virtual void forEachAsset(::brstd::function_ref<void(const Core::Path&)>) const = 0;

    virtual bool isEmpty() const = 0;
    // NOLINTEND
};
