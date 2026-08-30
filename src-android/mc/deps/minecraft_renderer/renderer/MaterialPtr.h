#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace mce { class RenderMaterial; }
namespace mce { class RenderMaterialGroupBase; }
namespace mce { class RenderMaterialInfo; }
// clang-format on

namespace mce {

class MaterialPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::RenderMaterialInfo>> mRenderMaterialInfoPtr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MaterialPtr(::mce::RenderMaterialGroupBase&, ::HashedString const&);

    MCNAPI ::HashedString const& getHashedName() const;

    MCNAPI bool isNull() const;

    MCNAPI explicit operator bool() const;

    MCNAPI ::mce::RenderMaterial const& operator*() const;

    MCNAPI ::mce::RenderMaterial const* operator->() const;

    MCNAPI ::mce::RenderMaterial* operator->();

    MCNAPI ::mce::MaterialPtr& operator=(::mce::MaterialPtr const&);

    MCNAPI bool operator==(::mce::MaterialPtr const&) const;

    MCNAPI ~MaterialPtr();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::RenderMaterialGroupBase&, ::HashedString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
