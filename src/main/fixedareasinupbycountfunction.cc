// Micro Wave Math
// Copyright (c) 2015-2020, Ark Lee
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
// You must obey the GNU General Public License in all respects for
// all of the code used.  If you modify file(s) with this exception, 
// you may extend this exception to your version of the file(s), but 
// you are not obligated to do so.  If you do not wish to do so, delete 
// this exception statement from your version. If you delete this exception 
// statement from all source files in the program, then also delete it here.
//
// Contact:  Ark Lee <arklee@houduan.online>
//           Beijing, China


#include "fixedareasinupbycountfunction.h"

MWVector<MWData> FixedAreaSinUpByCountFunction::GetValueStructure(
    const MWVector<MWData> &input) const {
    return MWVector<MWData>(1);
}

MWVector<MWData> &FixedAreaSinUpByCountFunction::AssignValue(
    const MWVector<MWData> &input, MWVector<MWData> &ret) const {
    ret[0] = MW_MATH_CONSTANT_TWO_DIVIDES_PIE_DEVIDES_TOW_DEVIDES_PIE_MINUS_ONE *
             (1 / input[1] - MW_MATH_CONSTANT_PIE_DIVIDES_TWO * (sin(
                                                                     MW_MATH_CONSTANT_TWO_DIVIDES_PIE * (input[0] + 1) / input[1]) - sin(
                                                                     MW_MATH_CONSTANT_TWO_DIVIDES_PIE * input[0] / input[1])));
    return ret;
}
