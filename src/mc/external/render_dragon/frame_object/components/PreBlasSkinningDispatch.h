#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedVertexBufferResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::frameobject::components {

#if defined(LL_PLAT_A) // @header-generator platform
struct PreBlasSkinningDispatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                         mPreSkinVertexBuffer;
    ::ll::UntypedStorage<8, 24>                                                         mPostSkinVertexBuffer;
    ::ll::TypedStorage<4, 4, uint>                                                      mVertexCount;
    ::ll::TypedStorage<4, 512, std::array<glm::mat<4, 4, float, (glm::qualifier)0>, 8>> mCurrentBones;
    ::ll::TypedStorage<8, 24, std::string>                                              mDebugName;
    // NOLINTEND

public:
    // prevent constructor by default
    PreBlasSkinningDispatch& operator=(PreBlasSkinningDispatch const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PreBlasSkinningDispatch();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct PreBlasSkinningDispatch {};
#endif // @header-generator platform

} // namespace dragon::frameobject::components
