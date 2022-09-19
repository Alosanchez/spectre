// Distributed under the MIT License.
// See LICENSE.txt for details.

#pragma once

#include "PointwiseFunctions/AnalyticSolutions/GeneralRelativity/WrappedGr.hpp"
#include "PointwiseFunctions/AnalyticSolutions/GrMhd/BondiMichel.hpp"
#include "Utilities/TMPL.hpp"

namespace GeneralizedHarmonic::Solutions {
/// GRMHD solutions wrapped for GH
namespace grmhd {
/// \brief List of all analytic solutions
using all_solutions = tmpl::list<
    GeneralizedHarmonic::Solutions::WrappedGr<::grmhd::Solutions::BondiMichel>>;
}  // namespace grmhd
}  // namespace GeneralizedHarmonic::Solutions
