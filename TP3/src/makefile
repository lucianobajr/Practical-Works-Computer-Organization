all: datapath_tb.v
	iverilog datapath_tb.v -o output

run: output
	./output

gtk: datapath.vcd
	gtkwave datapath.vcd