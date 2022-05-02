from matplotlib import pyplot as plt
from matplotlib.backends.backend_pdf import PdfPages
pp   = PdfPages('out07plot.pdf')
tmp1 = plt.figure(1)
tmp1.set_size_inches(8.00,6.00)
plot = open('out07plot-0.dat')
plot = [line.split() for line in plot]
valx = [float(x[0]) for x in plot]
valy = [float(x[1]) for x in plot]
plt.plot( valx, valy, '-', label=r'$\gamma$')
plot = open('out07plot-1.dat')
plot = [line.split() for line in plot]
valx = [float(x[0]) for x in plot]
valy = [float(x[1]) for x in plot]
plt.plot( valx, valy, '-', label=r'$e^{\pm}$')
plot = open('out07plot-2.dat')
plot = [line.split() for line in plot]
valx = [float(x[0]) for x in plot]
valy = [float(x[1]) for x in plot]
plt.plot( valx, valy, '-', label=r'$p/\overline{p}$')
plot = open('out07plot-3.dat')
plot = [line.split() for line in plot]
valx = [float(x[0]) for x in plot]
valy = [float(x[1]) for x in plot]
plt.plot( valx, valy, '-', label=r'$\nu$')
plot = open('out07plot-4.dat')
plot = [line.split() for line in plot]
valx = [float(x[0]) for x in plot]
valy = [float(x[1]) for x in plot]
plt.plot( valx, valy, '-', label=r'others')
plt.xlim( 0.000e+00, 2.500e+02)
plt.yscale('symlog', linthreshy=4.00e-04)
plt.legend(frameon=False,loc='best')
plt.title(r'Particle energy spectra')
plt.xlabel(r'$E$ (GeV)')
plt.ylabel(r'$(1/N_{\mathrm{event}}) \mathrm{d}N / \mathrm{d}E$ (GeV$^{-1}$)')
pp.savefig(tmp1,bbox_inches='tight')
plt.clf()
pp.close()
