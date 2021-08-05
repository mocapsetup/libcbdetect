/**
* Copyright 2018, ftdlyc <yclu.cn@gmail.com>
*
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 3 of the License, or (at your option) any later version.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with this library; if not, see <http://www.gnu.org/licenses/>.
*/

/*
% Copyright 2012. All rights reserved.
% Author: Andreas Geiger
%         Institute of Measurement and Control Systems (MRT)
%         Karlsruhe Institute of Technology (KIT), Germany

% This is free software; you can redistribute it and/or modify it under the
% terms of the GNU General Public License as published by the Free Software
% Foundation; either version 3 of the License, or any later version.

% This software is distributed in the hope that it will be useful, but WITHOUT ANY
% WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
% PARTICULAR PURPOSE. See the GNU General Public License for more details.

% You should have received a copy of the GNU General Public License along with
% this software; if not, write to the Free Software Foundation, Inc., 51 Franklin
% Street, Fifth Floor, Boston, MA 02110-1301, USA
*/

#pragma once
#ifndef LIBCBDETECT_NON_MAXIMUM_SUPPRESSION_H
#define LIBCBDETECT_NON_MAXIMUM_SUPPRESSION_H

#include <opencv2/opencv.hpp>

#include "config.h"
#include "find_corners.h"

namespace cbdetect {

LIBCBDETECT_DLL_DECL void non_maximum_suppression(const cv::Mat& img, int n, double tau, int margin, Corner& corners);

LIBCBDETECT_DLL_DECL void non_maximum_suppression_sparse(Corner& corners, int n, cv::Size img_size,
                                                         const Params& params);

} // namespace cbdetect

#endif //LIBCBDETECT_NON_MAXIMUM_SUPPRESSION_H