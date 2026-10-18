#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/base/ShaderConstantBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstant; }
namespace mce { class UniformMetaData; }
namespace mce::AlignmentHelper { template<typename T0, int T1> class AlignmentAllocator; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class ConstantBufferContainerBase {
public:
    // ConstantBufferContainerBase inner types define
    using ConstantBufferMemoryContainer = std::vector<uchar, mce::AlignmentHelper::AlignmentAllocator<uchar, 16>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<mce::ShaderConstantBase>>              mReflectedShaderConstants;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<mce::ShaderConstant>>> mShaderConstants;
    ::ll::UntypedStorage<8, 24>                                                  constantBufferBytes;
    ::ll::TypedStorage<8, 24, std::string>                                       mConstantBufferName;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstantBufferContainerBase& operator=(ConstantBufferContainerBase const&);
    ConstantBufferContainerBase(ConstantBufferContainerBase const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConstantBufferContainerBase();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConstantBufferContainerBase();

    MCNAPI ConstantBufferContainerBase(::mce::ConstantBufferContainerBase&&);

    MCNAPI void clone(::mce::ConstantBufferContainerBase&) const;

    MCNAPI void finalizeConstantBufferLayout();

    MCNAPI std::vector<uchar, mce::AlignmentHelper::AlignmentAllocator<uchar, 16>> const& getBuffer() const;

    MCNAPI std::string const& getConstantBufferName() const;

    MCNAPI ::mce::ShaderConstant* getUnspecializedShaderConstant(std::string const&) const;

    MCNAPI void registerReflectedShaderParameter(::mce::UniformMetaData const&);

    MCNAPI void registerShaderParameter(::mce::ShaderConstantBase const&);

    MCNAPI void reserveMemoryForShaderConstants(uint const, uint const);

    MCNAPI void setConstantBufferName(std::string const&);

    MCNAPI void setDirty();

    MCNAPI void setFromBytes(std::vector<uchar, mce::AlignmentHelper::AlignmentAllocator<uchar, 16>> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::ConstantBufferContainerBase&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ConstantBufferContainerBase {};
#endif // @header-generator platform

} // namespace mce
