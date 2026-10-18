#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class ConstantBufferContainerBase; }
namespace mce { class ShaderConstant; }
namespace mce { class UniformMetaData; }
namespace mce::AlignmentHelper { template<typename T0, int T1> class AlignmentAllocator; }
#ifndef LL_GENERATED_ANDROID_BASE_STUB_CONSTANTBUFFERCONTAINERRESOURCEBASE
#define LL_GENERATED_ANDROID_BASE_STUB_CONSTANTBUFFERCONTAINERRESOURCEBASE
class ConstantBufferContainerResourceBase {};
#endif
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class ConstantBufferContainer : public ::ConstantBufferContainerResourceBase {
public:
    // prevent constructor by default
    ConstantBufferContainer& operator=(ConstantBufferContainer const&);
    ConstantBufferContainer(ConstantBufferContainer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConstantBufferContainer();

    MCNAPI ConstantBufferContainer(::mce::ConstantBufferContainer&&);

    MCNAPI void clone(::mce::ConstantBufferContainer&) const;

    MCNAPI void finalizeConstantBufferLayout();

    MCNAPI std::vector<uchar, mce::AlignmentHelper::AlignmentAllocator<uchar, 16>> const& getBuffer() const;

    MCNAPI std::string const& getConstantBufferName() const;

    MCNAPI ::mce::ShaderConstant* getUnspecializedShaderConstant(std::string const&) const;

    MCNAPI void registerReflectedShaderParameter(::mce::UniformMetaData const&);

    MCNAPI void reserveMemoryForShaderConstants(uint const, uint const);

    MCNAPI void setConstantBufferName(std::string const&);

    MCNAPI void setDirty();

    MCNAPI void setFromBytes(std::vector<uchar, mce::AlignmentHelper::AlignmentAllocator<uchar, 16>> const&);

    MCNAPI ~ConstantBufferContainer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::ConstantBufferContainer&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class ConstantBufferContainer {};
#endif // @header-generator platform

} // namespace mce
