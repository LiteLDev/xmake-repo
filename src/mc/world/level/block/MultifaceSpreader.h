#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class IBlockWorldGenAPI;
// clang-format on

class MultifaceSpreader {
public:
    // MultifaceSpreader inner types define
    enum class SpreadType : uchar {
        SamePosition = 0,
        SamePlane    = 1,
        WrapAround   = 2,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using SpreadTypes = std::vector<MultifaceSpreader::SpreadType>;
#else // @header-generator platform
    using SpreadTypes = ::std::vector<::MultifaceSpreader::SpreadType>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<MultifaceSpreader::SpreadType>> mSpreadTypes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::MultifaceSpreader::SpreadType>> mSpreadTypes;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MultifaceSpreader();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MultifaceSpreader();
#else // @header-generator platform
    virtual ~MultifaceSpreader() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _canSpreadFrom(::Block const&, uchar const) const;
#else // @header-generator platform
    virtual bool _canSpreadFrom(::Block const& block, uchar const facing) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _canSpreadInto(::IBlockWorldGenAPI&, ::Block const&, ::BlockPos const&, uchar const) const;
#else // @header-generator platform
    virtual bool _canSpreadInto(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::BlockPos const&    pos,
        uchar const          placementDirection
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _isOtherBlockValidAsSource(::Block const&) const;
#else // @header-generator platform
    virtual bool _isOtherBlockValidAsSource(::Block const& block) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MultifaceSpreader(std::vector<MultifaceSpreader::SpreadType> const&);
#else // @header-generator platform
    MCAPI explicit MultifaceSpreader(::std::vector<::MultifaceSpreader::SpreadType> const& spreadTypes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::pair<const BlockPos, const uchar>> getSpreadFromFaceTowardDirection(
        ::IBlockWorldGenAPI&,
        ::Block const&,
        ::Block const&,
        ::BlockPos const&,
        uchar const,
        uchar const
#else // @header-generator platform
    MCAPI ::std::optional<::std::pair<::BlockPos const, uchar const>> getSpreadFromFaceTowardDirection(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::Block const&       block,
        ::BlockPos const&    pos,
        uchar                startingFace,
        uchar                spreadDirection
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int spreadFromAllFacesTowardAllDirections(
        ::IBlockWorldGenAPI&,
        ::Block const&,
        ::Block const&,
        ::BlockPos const&
#else // @header-generator platform
    MCAPI int spreadFromFaceTowardAllDirections(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::Block const&       block,
        ::BlockPos const&    pos,
        uchar                startingFace
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int spreadFromFaceTowardAllDirections(
        ::IBlockWorldGenAPI&,
        ::Block const&,
        ::Block const&,
        ::BlockPos const&,
        uchar const
#else // @header-generator platform
    MCAPI bool spreadFromFaceTowardDirection(
        ::BlockSource&    region,
        ::Block const&    self,
        ::Block const&    block,
        ::BlockPos const& pos,
        uchar             startingFace,
        uchar             spreadDirection
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool spreadFromFaceTowardDirection(
        ::BlockSource&,
        ::Block const&,
        ::Block const&,
        ::BlockPos const&,
        uchar const,
        uchar const
#else // @header-generator platform
    MCAPI bool spreadFromFaceTowardRandomDirection(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::Block const&       block,
        ::BlockPos const&    pos,
        uchar                startingFace
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool spreadFromFaceTowardRandomDirection(
        ::IBlockWorldGenAPI&,
        ::Block const&,
        ::Block const&,
        ::BlockPos const&,
        uchar const
    ) const;

    MCNAPI bool spreadFromRandomFaceTowardRandomDirection(
        ::IBlockWorldGenAPI&,
        ::Block const&,
        ::Block const&,
        ::BlockPos const&
#else // @header-generator platform
    MCAPI bool spreadFromRandomFaceTowardRandomDirection(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::Block const&       block,
        ::BlockPos const&    pos
#endif // @header-generator platform
    ) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<MultifaceSpreader::SpreadType> const& ALL_SPREAD_TYPES();
#else // @header-generator platform
    MCAPI static ::std::vector<::MultifaceSpreader::SpreadType> const& ALL_SPREAD_TYPES();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<MultifaceSpreader::SpreadType> const& SAME_POSITION_ONLY();
#else // @header-generator platform
    MCAPI static ::std::vector<::MultifaceSpreader::SpreadType> const& SAME_POSITION_ONLY();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<MultifaceSpreader::SpreadType> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::vector<::MultifaceSpreader::SpreadType> const& spreadTypes);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_canSpreadFrom(::Block const&, uchar const) const;
#else // @header-generator platform
    MCAPI bool $_canSpreadFrom(::Block const& block, uchar const facing) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_canSpreadInto(::IBlockWorldGenAPI&, ::Block const&, ::BlockPos const&, uchar const) const;
#else // @header-generator platform
    MCAPI bool $_canSpreadInto(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::BlockPos const&    pos,
        uchar const          placementDirection
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_isOtherBlockValidAsSource(::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $_isOtherBlockValidAsSource(::Block const& block) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
